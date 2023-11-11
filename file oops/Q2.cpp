// Write a program to read 2 numbers from the keyboard and display the larger value on the screen.
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class larger{
    int num1,num2;

    public:
        larger(){
            
        cout<<"enter your chutiya sa naam"<<" ";
        string input;
        getline(cin,input);
        cout<<input<<endl;
            cout<<"enter first and second number:-\n";

            cin>>num1>>num2;

            if(num1>num2){
                cout<<"pehela bada hai"<<endl<<num1;
            }
            else if (num2>num1)
            {
                cout<<"dusra badha hai loveDay"<<endl<<num2;
            }
        }
};
int main(){
    larger obj1;
        return(0);
}