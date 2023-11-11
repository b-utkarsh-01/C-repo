//Take values of length and breadth of a rectangle from user and check if it is square or not.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    float len,bre;

    cout<<"enter length and breadth :-";
    cin>>len>>bre;

    if(len==bre){
        cout<<"yes bitch it's a square";
    }
    else{
        cout<<"yes bitch it's a rectangle";
    }
    return 0;
}