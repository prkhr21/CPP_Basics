//This program is to understand unions.

#include<iostream>
using namespace std;

union s
{
    int a;
    float b;
    char c;
};
int main()
{
    union s x;
    x.a=10;
    cout<<"value of x.a is "<<x.a<<endl;
    x.b=3.14;
    cout<<"value of x.b is "<<x.b<<endl;
    x.c='p';
    cout<<"value of x.c is "<<x.c<<endl;
    cout<<"after allocating value of x.a is "<<x.a<<endl;
    cout<<"after allocating value of x.b is "<<x.b<<endl;
    cout<<"after allocating value of x.c is "<<x.c<<endl;
    return 0;
}