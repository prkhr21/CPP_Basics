//This program swaps private data of 2 class.

#include<iostream>
#include<string>
using namespace std;

//Forward Declaration.
class c1;
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);
    public:
        void inData(int);
        void outData();
};

void c1 :: inData(int n)
{
    val1 = n;
}

void c1 :: outData()
{
    cout<<"val1 = "<<val1<<endl;
}

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void inData(int);
        void outData();
};

void c2 :: inData(int n)
{
    val2 = n;
}

void c2 :: outData()
{
    cout<<"val2 = "<<val2<<endl;
}

void exchange(c1 &a, c2 &b)
{
    int temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.inData(11);
    oc2.inData(21);
    exchange(oc1, oc2);
    cout<<"The value of oc1.val1 after exchanging becomes - ";
    oc1.outData();
    cout<<endl;
    cout<<"The value of oc2.val2 after exchanging becomes - ";
    oc2.outData();
    cout<<endl;
    return 0;
}