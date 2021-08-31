//This program is to understand inline function.

#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    return a*b;
}
int main()
{
    int num1,num2;
    cout<<"Enter 1st no.-"<<endl;
    cin>>num1;
    cout<<"Enter 2nd no.-"<<endl;
    cin>>num2;
    cout<<"Product = "<<product(num1,num2)<<endl;
    return 0;
}