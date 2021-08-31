//This program is to understand call by value and call by refrence.

#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int num1, num2;
    cout<<"Enter 1st no.-"<<endl;
    cin>>num1;
    cout<<"Enter 2nd no.-"<<endl;
    cin>>num2;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    swap(num1, num2);
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    return 0;
}