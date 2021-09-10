//This program is to understand function template.

#include<iostream>
using namespace std;

template<class T1, class T2>
float average(T1 a, T2 b)
{
    float avg;
    avg = (a + b) / 2.0;
    return avg;
}

template<class T>
void swap1(T &i, T &j)
{
    T temp = i;
    i = j;
    j = temp;
}

int main()
{
    int a = 1, b = 12, n = 21, m = 11;
    float result, x = 2.5, y = 7.6;
    
    //average function called with integer arguments.
    result = average(a, b);
    cout<<"Average = "<<result<<endl;
    
    //average fuction called with float arguments.
    result = average(x, y);
    cout<<"Average = "<<result<<endl;
    
    //swap1 function called with integer arguments.
    cout<<"Before swapping"<<endl;
    cout<<"n = "<<n<<" & m = "<<m<<endl;
    swap1(n, m);
    cout<<"After swapping"<<endl;
    cout<<"n = "<<n<<" & m = "<<m<<endl;
    
    //swap1 function called with float arguments.
    cout<<"Before swapping"<<endl;
    cout<<"x = "<<x<<" & y = "<<y<<endl;
    swap(x, y);
    cout<<"After swapping"<<endl;
    cout<<"x = "<<x<<" & y = "<<y<<endl;
    
    return 0;
}