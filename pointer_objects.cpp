//This program is to understand pointers to object

#include<iostream>
using namespace std;

class complex
{
    int real, imaginary;
    public:
        void setdata(int r, int i)
        {
            real = r;
            imaginary = i;
        }
        void getdata()
        {
            cout<<"Complex no. = "<<real<<" + "<<imaginary<<"i"<<endl;
        }
};

int main()
{
    complex c;
    complex *ptr = new complex;   //pointer of type complex.
    ptr = &c;   //ptr taking address of c.
    (*ptr).setdata(3, 7);   //calling setdata function using pointer & * operator.
    ptr->getdata();     //calling getdata function using pointer & arrow -> operator.
    complex *arr = new complex[5];
    for(int i = 0; i < 5; i++)
    {
        (arr + i)->setdata(i+3, i+5);
        (arr + i)->getdata();
    }
    return 0;
}