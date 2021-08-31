//This program is to understand pointers to arrays.

#include<iostream>
using namespace std;

int main()
{
    int marks[5]={10,20,30,40,50};
    int i;
    int *ptr=marks;
    for(i=0;i<5;i++)
    {
        cout<<"marks of student "<<i<<" is "<<*(ptr+i)<<endl;
    }
    return 0;
}