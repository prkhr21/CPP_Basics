//This program is to understand constants.

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    cout<<"value of a is "<<a<<endl;
    a=20;
    cout<<"value of a is "<<a<<endl;
    const float pi=3.14;
    cout<<"value of pi is "<<pi<<endl;
    //pi=3.15;    //This will give error "assignment of read only variable".
    //cout<<"value of pi is "<<pi<<endl;
    return 0;
}