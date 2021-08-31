//This program is to understand typecasting

#include<iostream>
using namespace std;

int main()
{
    float pi=3.14,a=10.5;
    int b=10;
    cout<<"value of pi is "<<pi<<endl;
    cout<<"Int value of pi is "<<(int)pi<<endl;     //Typecasting from float to int.
    cout<<"value of a+b is "<<a+b<<endl;
    cout<<"value of (int)a+b is "<<((int)a+b)<<endl;
    cout<<"value of int(a)+b is "<<(int(a)+b)<<endl;    //(int)a is same as int(a).
    return 0;
}