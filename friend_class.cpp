//This program is to understand how to make a member function of class, friend of another class.

#include <iostream>
#include <string>
using namespace std;

//forward declaration of class.
class complex;
class calcultor;

class calculator
{
public:
    //Declaration of public funtion of class calculator.
    int sumReal(complex, complex);
    int sumImaginary(complex, complex);
};

class complex
{
    int a, b;

public:
    void setData(int, int);
    void printData(void);
    //Declaring other class as friend of this class.
    friend class calculator;
    //Now all the member functions of class calculator are friends with class complex
};

void complex ::setData(int v1, int v2)
{
    a = v1;
    b = v2;
}

void complex ::printData()
{
    cout << "Complex Number  = " << a << " + " << b << "i" << endl;
}

int calculator ::sumReal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumImaginary(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    int real, imaginary;
    complex c1, c2, c3;
    c1.setData(1, 3);
    c1.printData();
    c2.setData(2, 5);
    c2.printData();
    calculator calc;
    real = calc.sumReal(c1, c2);
    cout << "The sum of real part of complex no. c1 & c2 is " << real << endl;
    imaginary = calc.sumImaginary(c1, c2);
    cout << "The sum of imaginary part of complex no. c1 & c2 is " << imaginary << endl;
    return 0;
}