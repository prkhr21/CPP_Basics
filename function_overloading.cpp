//This program is to understand function overloading.

#include<iostream>
using namespace std;

int sum(int x, int y)
{
    cout<<"using function with 2 arguments"<<endl;
    return x+y;
}

int sum(int x, int y, int z)
{
    cout<<"using function with 3 arguments"<<endl;
    return x+y+z;
}

int main()
{
    int a,b,c;
    cout<<"Enter value of a,b,c -"<<endl;
    cin>>a>>b>>c;
    cout<<"sum of a & b is "<<sum(a,b)<<endl;
    cout<<"sum of a, b & c is "<<sum(a,b,c)<<endl;
    return 0;
}