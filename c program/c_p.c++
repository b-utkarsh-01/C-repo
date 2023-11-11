#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAXN = 500005;

vector<int> adj[MAXN];
int dp[MAXN][2];
int max_dist[MAXN];
bool visited[MAXN];

void dfs1(int u, int parent, int d) {
    visited[u] = true;
    max_dist[u] = d;

    for (int v : adj[u]) {
        if (v != parent) {
            dfs1(v, u, d+1);
            if (max_dist[v] > max_dist[u]) {
                max_dist[u] = max_dist[v];
            }
        }
    }
}

void dfs2(int u, int parent) {
    visited[u] = true;

    for (int v : adj[u]) {
        if (v != parent) {
            dfs2(v, u);
            if (dp[v][0] + 1 > dp[u][0]) {
                dp[u][1] = dp[u][0];
                dp[u][0] = dp[v][0] + 1;
            } else if (dp[v][0] + 1 > dp[u][1]) {
                dp[u][1] = dp[v][0] + 1;
            }
        }
    }
}

int main() {
    int N, D;
    cin >> N >> D;

    for (int i = 0; i < N-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    memset(visited, false, sizeof(visited));
    dfs1(1, -1, 0);

    int Q;
    cin >> Q;

    while (Q--) {
        int x;
        cin >> x;

        // Find the farthest node from x that is at most distance D away
        int u = x, v = x;
        memset(dp, 0, sizeof(dp));
        memset(visited, false, sizeof(visited));
        dfs2(x, -1);

        while (max_dist[u] - max_dist[x] < D && u != v) {
            int p = -1;
            for (int w : adj[u]) {
                if (w != v && visited[w]) {
                    if (dp[w][0] + 1 == dp[u][0]) {
                        p = w;
                        break;
                    }
                }
            }
            if (p != -1) {
                v = u;
                u = p;
            } else {
                v = u;
                u = parent[u];
            }
        }

        // Compute the maximum distance between all pairs of nodes that are at most distance D apart
        int ans = dp[u][0] + dp[v][0];
        for (int w : adj[u]) {
            if (w != v && visited[w]) {
                ans = max(ans, dp[u][0] + dp[w][0] + 1);
            }
        }
        for (int w : adj[v]) {
            if (w != u && visited[w]) {
                ans = max(ans, dp[v][0] + dp[w][0] + 1);
            }
        }

        cout << ans << endl;
    }

    return 0;
}