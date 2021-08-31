//This program is to understand refrence variable

#include<iostream>
using namespace std;

int main()
{
    int a=100;
    cout<<"value of a is "<<a<<endl;
    int & b=a;  //"&" is "addressof" oprator
    cout<<"value of b is "<<b<<endl;
    cout<<"size of a is "<<sizeof(a)<<endl;
    cout<<"size of b is "<<sizeof(b)<<endl;
    return 0;
}