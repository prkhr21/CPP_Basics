//This program is to understand contructor in derived class.

#include<iostream>
using namespace std;

class base1
{
    int data1;
    public:
        base1(int i)
        {
            cout<<"Class base1 constructor invoked."<<endl;
            data1 = i;
        }
        void printbase1()
        {
            cout<<"Value of data1 = "<<data1<<endl;
        }
};

class base2
{
    int data2;
    public:
        base2(int i)
        {
            cout<<"Class base2 constructor invoked."<<endl;
            data2 = i;
        }
        void printbase2()
        {
            cout<<"Value of data2 = "<<data2<<endl;
        }
};

class derived : public base1, public base2
{
    int derived1, derived2;
    public:
        derived(int p, int q, int r, int s) : base1(p), base2(q)
        {
            cout<<"Class derived constructor invoked."<<endl;
            derived1 = r;
            derived2 = s;
        }
        void printderived()
        {
            cout<<"Value of derived1 = "<<derived1<<endl;
            cout<<"Value of derived2 = "<<derived2<<endl;
        }
};

int main()
{
    derived d(1, 2, 3, 4);
    d.printbase1();
    d.printbase2();
    d.printderived();  
    return 0;
}