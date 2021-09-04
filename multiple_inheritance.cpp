//This program is to understand multiple inheritance.

#include<iostream>
using namespace std;

class base1
{
    protected:
        int var1;
    public:
        void setdata1(int);
        void getdata1(void);
};

void base1 :: setdata1(int val)
{
    var1 = val;
}

void base1 :: getdata1()
{
    cout<<"data1 = "<<var1<<endl;
}

class base2
{
    protected:
        int var2;
    public:
        void setdata2(int);
        void getdata2(void);
};

void base2 :: setdata2(int val)
{
    var2 = val;
}

void base2 :: getdata2()
{
    cout<<"data2 = "<<var2<<endl;
}

class derived : public base1, public base2
{
    protected:
        int var3;
    public:
        void sum();
};

void derived :: sum()
{
    var3 = var1 + var2;
    cout<<"sum = "<<var3<<endl;
}

int main()
{
    derived d;
    d.setdata1(11);
    d.setdata2(21);
    d.getdata1();
    d.getdata2();
    d.sum();
    return 0;
}