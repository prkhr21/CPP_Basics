//This program is to understand Friend function.

#include <iostream>
#include <string>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int, int);
    void print(void);
    friend complex sumcomplex(complex, complex); //Declaring Function sumcomplex friend of class complex
};

void complex ::setData(int v1, int v2)
{
    a = v1;
    b = v2;
}

void complex ::print()
{
    cout << "complex no. = " << a << " + " << b << "i" << endl;
}

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 4);
    c1.print();
    c2.setData(3, 7);
    c2.print();
    c3 = sumcomplex(c1, c2);
    c3.print();
    return 0;
}