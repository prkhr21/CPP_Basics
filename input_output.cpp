//This is a program to understand basic input output

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter 1st value:\n"; //"<<" is called Insertion operator.
    cin>>num1; //">>" is called Extraction operator.
    cout<<"Enter 2nd value:\n";
    cin>>num2;
    cout<<"Sum = "<<num1+num2;
    return 0;
}

