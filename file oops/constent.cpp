/*                                                                        CONSTENT VARIABLE
Constent:- A constant is a name given to the variable whose values can't be altered or changed 
        key word:- const
           in the program we use many variable wich have alreday assign a value, but if we accidentally use same variable then a value of the variable is chnaged
        eg:-  int a=5; //here the value of varibel a is 5
                  a=7; //but now the value of variable a is changed into 7
           so, avoiding that type of error we use CONSTENT in our program*/

//Program for calculeting area of cirle
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main (){
    //declering a constenet pi
    const double pi=3.14;//value of pi is constent
    int r;
    //pi=2111;           //trying of change value of pi
    cout<<"enter radius of circle:- ";
    cin>>r;
    cout<<"this is the area of circle:-"<<pi*r*r<<endl;
    return 0;
}

/*                                                                      Naming Conventions
Naming Conventions:- a naming convention is a set of rules for choosing the character sequence to be used for identifiers which denote variables, types, functions,
                     and other entities in source code and documentation.
Names can contain letters, digits and underscores. Names must begin with a letter or an underscore (_) Names are case sensitive ( myVar and myvar are different variables) Names cannot contain spaces or special characters like !, #, %, etc. Reserved words (like C++ keywords, such as int ) cannot be used as names.

common naming conventions used in programming:-
        •> SnakE Case:- using lower case alphabet when we declering our variable/constent and if we have multipal words we using underscore(_) to seprate them
                        eg:- int hello_world;
        •> Pascal Case:- the First latter of every word shuld be capital.
                         eg:- int HelloWorld;
        •> Camel Case:- in's simmel to Pascal Case but the diffrence is the first latter of first word should be small.
                        eg:- int helloWorld;
        •> Hungarian Notation:- it is similar to Snake Case but there is a prefix which indicates data type of the variable/constent.
                        eg:- int intHelloWorld;*/
//program for each Name Conventions
#include <iostream>
using std::cout;
using std::endl;
int main(){
    // snake case;
    int hello_world = 4;
    //Pascal Case
    int HelloWorld = 3;
    //Camel Case
    int hellWorld = 2;
    //Hungarian Notation
    char charHelloWorld = '*';
    cout<<"this is Snake Case:-"<<hello_world<<endl<<"this is Pascal Case:-"<<HelloWorld<<endl<<"this is Camel Case"<<hellWorld<<"this is Hungarin Notation"<<charHelloWorld;
    return 0;
}