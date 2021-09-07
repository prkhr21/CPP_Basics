//This program is to understand "this" keyword

#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        void setData(int a)
        {
            //a = a;  //this is not correct. a will print garbage value.
            this->a = a;
        }
        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};

int main()
{
    A a;
    a.setData(21);
    a.getData();
    return 0;
}