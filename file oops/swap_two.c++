#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class bubble {
    int n;
    int* arr;
public:
    void inputArray() {
        cout << "Enter the size of the array: ";
        cin >> n;

        arr = new int[n];

        cout << "Enter the elements of the array: " << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << endl << "Your entered elements: ";
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;

        bubbleSort();  // Call bubbleSort function here
    }

    void bubbleSort() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~bubble() {
        delete[] arr;
    }
};

int main() {
    bubble arr1;
    arr1.inputArray();
    return 0;
}
