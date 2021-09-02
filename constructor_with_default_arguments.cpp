//This program is to understand constructor with default arguments.

#include<iostream>
#include<string>
using namespace std;

class simple
{
    int data1, data2;

    public:
        simple(int, int);
        void printData(void);
};

simple :: simple(int val1, int val2 = 0)    //Constructor with default argument.
{
    data1 = val1;
    data2 = val2;
}

void simple :: printData()
{
    cout<<"The value of Data1 & Data2 is "<<data1<<" and "<<data2<<endl;
}

int main()
{
    simple a(1, 5);
    a.printData();
    simple b(2);
    b.printData();
    return 0;
}