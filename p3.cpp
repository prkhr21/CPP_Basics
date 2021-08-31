//Program to understand local and global scope of variable

#include<iostream>
using namespace std;

int global=1;
void fun()
{
    int global=100;
    cout<<"global = "<<global<<"\n";
}

int main()
{
    int a=10,b=20,global=10;
    float pi=3.14;
    char c='a';
    bool is_true=true;
    fun();
    cout<<"global = "<<global<<"\n";
    cout<<"value of a = "<<a<<".\n"<<"value of b = "<<b<<".\n"<<"value of pi = "<<pi<<".\n"<<"is value of boolean variable true = "<<is_true<<".\n";
    cout<<"global = "<<::global; //"::" is called scope resolution operator
    return 0; 
}