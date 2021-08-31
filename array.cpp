//This program is to understand array.

#include<iostream>
using namespace std;

int main()
{
    int i,j=0;
    int marks[5]={10,20,30,40,50};
    // for(i=0;i<5;i++)
    // {
    //     cin>>marks[i];
    // }
    cout<<"using for loop"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"Marks of student "<<i<<" is "<<marks[i]<<endl;
    }
    i=0;
    cout<<"using while loop"<<endl;
    while(i<5)
    {
        cout<<"Marks of student "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    i=0;
    cout<<"using do-while loop"<<endl;
    do
    {
        cout<<"Marks of student "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i<5);
    return 0;
}