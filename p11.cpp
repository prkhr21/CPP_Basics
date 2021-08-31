//This program is to understand pointers.

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr=&a;  //"&" is "addressof" operator. "*" is called derefrence/value at operator.
    int **pptr=&ptr;    //pointer to pointer - variable that stores address of pointers.
    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<*ptr<<endl;
    cout<<"value of a is "<<**pptr<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a is "<<ptr<<endl;
    cout<<"address of a is "<<*pptr<<endl;
    return 0;
}