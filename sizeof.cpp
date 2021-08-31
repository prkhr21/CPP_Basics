//this program to understand default size of decimal numbers.

#include<iostream>
using namespace std;

int main()
{
    cout<<"size of 34.4 is "<<sizeof(34.4)<<endl; //By default decimal are stored as double.s
    cout<<"size of 34.4f is "<<sizeof(34.4f)<<endl; //"f" stands for float.
    cout<<"size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"size of 34.4l is "<<sizeof(34.4l)<<endl; //"l" stands for long double.
    cout<<"size of 34.4L is "<<sizeof(34.4L)<<endl;
    return 0;
}