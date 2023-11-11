#include<iostream>
#include<fstream>

int main(){
    ofstream ok;
    // open file for writing in binary mode (default)
    if (!ok){
        cerr << "Error: could not create output file" << endl;
        return 1;
        }
        else{
            cout<<"File created successfully"<<endl;}
            char ch='A';//character to write into the file
            int count=0;//counter variable
            while(count<=524387)//loop until we have written all characters
            {
                ok<<ch++;
                ++count;
                }
                cout<<"All Characters are Written Successfully!"<<endl;
                ok.close();
                // exit(EXIT_SUCCESS);
}