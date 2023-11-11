#include<iostream>

using namespace std;

class badlo{

    public:
    static void swap(int& num1, int& num2){

    int temp=num1;
        num1=num2;
        num2=temp;
    cout<<"after swap:"<<endl<<"a="<<num1<<endl<<"b="<<num2;
    }
};

int main(){
    int obj1,obj2;
    cout<<"a=";
    cin>>obj1;

    cout<<"b=";
    cin>>obj2;
    cout<<"before swap"<<endl<<"a="<<obj1<<endl<<"b="<<obj2<<endl;
    badlo::swap(obj1,obj2);

return(0);
};