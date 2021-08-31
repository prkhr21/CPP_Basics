// Fibonacci sequence.

#include<iostream>
using namespace std;

void fibonacci(int l)
{
    int a=0,b=1,c;
    cout<<a<<"\t"<<b;
    for(int i=0;i<l-2;i++)
    {
        c=a+b;
        cout<<"\t"<<c;
        a=b;
        b=c;
    }
}
int main()
{
    int limit;
    cout<<"enter limit - ";
    cin>>limit;
    fibonacci(limit);
    return 0;
}