#include <iostream>
#include <string>
// #include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class student {
private:
    string name;
    string college;
    float cgpa;
    string answer;

public:
    student() {
        cout << "Enter full name dude: ";
        getline(cin,name);

        cout << "Enter college name buddy: ";
        // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
        getline(cin, college);

        cout << "Would you like to share your college CGPA? (yes/no): ";
        cin >> answer;

        if (answer == "yes") {
            cout << "Please enter the CGPA of " << name << ": ";
            cin >> cgpa;
        } else if (answer == "no") {
            cout << "Ok, it's fine." << endl;
        }
    }
    student(){
        cout<<"hello "<<name<<"glade to meet you"<<endl;
        cout<<"wow, this college could be good one "<<college<<endl;

        if((cgpa<='6')&&(answer>='0')){
            cout<<"your cgpa "<<answer<<" you need to study buddy";
        }
        else{
            cout<<"pretty good cgpa";
        }
    }
};

int main() {
    student sut1;

    return 0;
}
// Try the modified code and see if you can now enter the college name successfully. If you encounter any issues or errors, please provide more details so that I can assist you further.
