//This program is to understand constructor overloading.

#include<iostream>
#include<string>
using namespace std;

class complex
{
    int real, img;
    
    public:
        complex(void);  //Default constructor.
        complex(int);   //Parameterized constructor with 1 parameter.
        complex(int, int);  //Parameterized constructor with 2 parameter.
        void printNum(void);
};

complex :: complex()
{
    real = 0;
    img = 0;
    cout<<"Default constructor invoked"<<endl;
}

complex :: complex(int val1)
{
    real = val1;
    img = 0;
    cout<<"Constructor with one parameter invoked"<<endl;
}

complex :: complex(int val1, int val2)
{
    real = val1;
    img = val2;
    cout<<"Constructor with two parameter invoked"<<endl;
}

void complex :: printNum()
{
    cout<<"Complex Number = "<<real<<" + "<<img<<"i"<<endl;
} 

int main()
{
    complex c1;
    c1.printNum();
    complex c2(1);
    c2.printNum();
    complex c3(2, 3);
    c3.printNum();
    return 0;
}