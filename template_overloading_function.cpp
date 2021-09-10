//This program is to understand template overloading function.

#include<iostream>
using namespace std;

template<class T>
void fun(T a)
{
    cout<<"Function with template invoked"<<endl<<"Value = "<<a<<endl;
}

void fun(int a)
{
    cout<<"Function without template invoked"<<endl<<"Value = "<<a<<endl;
}

int main()
{
    int x;
    float y;
    char z;
    
    //Exact match gets the highest priority.

    //fun without template will be called here.
    x = 1997;
    fun(x);
    
    //fun with template will be called here.
    y = 21.11;
    fun(y);

    //fun with template will be called here.
    z = 'N';
    fun(z);
    
    return 0;
}