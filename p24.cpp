//This program is to understand classes.

#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;                              //Private variables - can only accessed by functions of this class.
    public:
        int d,e;                                //Public variables - can be accessed by anyone.
        void setData(int a1, int b1, int c1);   //Declaration
        void getData();                         //Declaration
};

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

void Employee :: getData()
{
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
}
int main()
{
    Employee prakhar;
    //prakhar.a = 10;                           //This will throw error as a is private variable.
    prakhar.d = 11;
    prakhar.e = 21;
    prakhar.setData(1,2,3);
    prakhar.getData();
    return 0;
}