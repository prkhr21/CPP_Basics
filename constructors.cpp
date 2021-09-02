//This program is to understand Constructors.

#include<iostream>
#include<string>
using namespace std;

class complex
{
    int a, b;
    
    public:
        complex(void);
        void printNum(void);
};

complex :: complex()
{
    a = 0;
    b = 0;
}

void complex :: printNum()
{
    cout<<"Complex No. = "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
    complex c;
    c.printNum();
    return 0;
}