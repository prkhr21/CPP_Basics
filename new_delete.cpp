//This program is to understand new & delete keyword.

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Address of a = "<<ptr<<endl;
    cout<<"Value at address "<<ptr<<" is = "<<*(ptr)<<endl;
    int *p = new int(20);
    cout<<"Address of p is = "<<p<<endl;
    cout<<"Value at address "<<p<<"is = "<<*(p)<<endl;
    int *arr = new int[5];
    for(int i = 0; i < 5; i++)
    {
        arr[i] = i;
        cout<<"Value of arr["<<i<<"] = "<<arr[i]<<endl;
    }
    delete [] arr;
    for(int j = 0; j < 5; j++)
    {
        //arr[i] = i;
        cout<<"Value of arr["<<j<<"] = "<<arr[j]<<endl;
    }
    return 0;
}