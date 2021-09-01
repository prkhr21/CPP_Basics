// This program is to understand how objects can be passed through methods of same class.

#include <iostream>
#include <string>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int, int);
    void sumcomplex(complex, complex); //function taking arguments of type class complex.
    void print(void);
};

void complex ::setData(int v1, int v2)
{
    a = v1;
    b = v2;
}

void complex ::sumcomplex(complex o1, complex o2)  //Adding 2 complex numbers.
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}

void complex ::print()
{
    cout << a << " + " << b << "i" << endl;
}

int main()
{
    complex c1, c2, c3;
    c1.setData(2, 4);
    c1.print();
    c2.setData(3, 5);
    c2.print();
    c3.sumcomplex(c1, c2);
    c3.print();
    return 0;
}