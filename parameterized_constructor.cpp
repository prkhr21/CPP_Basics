//This program is to understand Parameterized constructor.

#include<iostream>
#include<string>
using namespace std;

class complex
{
    int  a, b;
    
    public:
        complex(int, int);
        void printNum(void);
};

complex :: complex(int x, int y)
{
    a = x;
    b = y;
}

void complex :: printNum()
{
    cout<<"Complex Num = "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
    complex c1(1, 3);    //Implicit call.
    complex c2 = complex(5, 7);    //Explicit call
    c1.printNum();
    c2.printNum();
    return 0;
}