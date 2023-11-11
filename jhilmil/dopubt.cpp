#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array:"<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<endl;
    }
    int del;
    cout<<"enter the element that you wanna delete:- ";
    cin>>del;
    for(int i= del-1; i<size-1;i++){
        if(del==arr[i])
            arr[i]=arr[i+1];
        else{
            continue;
        }
        
    }

    cout<<"after deleting an element :-"<<endl;
    for (int j = 0 ;j < size ; ++j){
        cout<<arr[j]<<endl;

    }
        getch();
return(0);
}