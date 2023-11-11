#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;

class sample{
	
    int id;
    public:
        void init(int x){
            id=x;
        }
        sample(){

        }
        sample(sample &t){
            id=t.id;
        }
        void display(){
            cout<<"  ID is  "<<id<<endl;
        }
};

int main(){
//clrscr;
    sample obj1;
    obj1.init(10);
    obj1.display();
    sample obj2;

    obj2=obj1;
    
    obj2.display();
    getch();
return(0);
}
