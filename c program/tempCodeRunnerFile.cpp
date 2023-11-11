#include<iostream>
using namespace std;
class a
{
    public:
    int val1,val2;
    void getData()
    {
        cout<<"Enter The Two Values";
        cin>>val1>>val2;
    }
};
class B:public a
{
    public:
    int sum;
    void showData()
    {
        sum=val1+val2;
        cout<<"Sum="<<sum;

    }
};
int main()
{
    B b1;
    b1.getData();
    b1.showData();
    return 0;
}