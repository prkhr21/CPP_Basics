//This program is to understand functions.

#include<iostream>
using namespace std;

int sum(int,int);   //Function prototype.

int main()
{
    int num1,num2;
    cout<<"Enter 1st no.-"<<endl;
    cin>>num1;
    cout<<"Enter 2nd no.-"<<endl;
    cin>>num2;
    cout<<"sum = "<<sum(num1,num2)<<endl;
    return 0;
}

int sum(int a,int b)
{
    int c=a+b;
    return c;
}