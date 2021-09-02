//This program is to understand Constructors.

#include<iostream>
#include<string>
using namespace std;

class complex
{
    int a, b;
    
    public:
        complex(void);  //Declaring Constructor.
        void printNum(void);
};

complex :: complex()    //Defining Constructor.
{
    a = 0;  //Initializing value of a & b as soon as an object created.
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