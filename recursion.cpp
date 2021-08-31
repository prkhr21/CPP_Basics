//This program is to understand recursion.

#include<iostream>
using namespace std;

int fact(int a)
{
    int n=a;
    if(a<1)
    {
        return 0;
    }
    if(a>1)
    {
        n=n*fact(a-1);
    }
    return n;
}

int main()
{
    int num1;
    cout<<"Enter a no.- ";
    cin>>num1;
    cout<<"Factorial = "<<fact(num1)<<endl;
    return 0;
}