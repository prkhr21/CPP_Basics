#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    cout<<"Enter 2 numbers - ";
    cin>>a>>b;
    cout<<"Numbers before swapping - \na = "<<a<<" & b = "<<b<<"\n";
    swap(&a, &b);
    cout<<"Numbers after swapping - \na = "<<a<<" & b = "<<b<<"\n";
    return 0;
}