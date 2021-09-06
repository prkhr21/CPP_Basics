//This program is to understand initialization section

#include<iostream>
using namespace std;

class test
{
    int a, b;
    public:
        // test(int i, int j) : a(i), b(j) - NO ERROR
        // test(int i, int j) : a(i), b(i + j) - NO ERROR
        // test(int i, int j) : a(i), b(2 * j) - NO ERROR
        // test(int i, int j) : a(i), b(a + j) - NO ERROR
        // test(int i, int j) : a(i + b), b(j) - a will get i + garbaje value b.
        // test(int i, int j) : b(j),  a(i + b) - still a will get garbaje value because a will initialize 1st as a is declared 1st
        test(int i, int j) : a(i), b(j)
        {
            cout<<"Constructor of class test invoked."<<endl;
            cout<<"The value of a = "<<a<<endl;
            cout<<"The value of b = "<<b<<endl;
        }
};

int main()
{
    test t(11, 21);    
    return 0;
}