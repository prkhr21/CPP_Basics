//This program is to understand manipulator setw.
//To use setw header file iomanip has to be included.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a=10,b=100,c=1000;
    cout<<"value of a without setw is "<<a<<endl;   //setw stands for set width.
    cout<<"value of b without setw is "<<b<<endl;   //endl is also a manipulator it stands for end line.
    cout<<"value of c without setw is "<<c<<endl;
    cout<<"value of a with setw is "<<setw(4)<<a<<endl;
    cout<<"value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"value of c with setw is "<<setw(4)<<c<<endl;
    return 0;
}