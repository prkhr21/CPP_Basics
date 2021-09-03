//This program is to understand single inheritance.

#include <iostream>
using namespace std;

class base
{
    int data1; //private member & method of base class is not inherited by derived class.

public:
    int data2;
    base(void);
    void setData(void);
    int getData1(void);
    int getData2(void);
};

base ::base()
{
    //Default constructor of class base.
    cout << "Default constructor of class base invoked." << endl;
}

void base ::setData()
{
    cout << "Enter 2 numbers - " << endl;
    cin >> data1 >> data2;
}

int base ::getData1(void)
{
    return data1;
}

int base ::getData2(void)
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    derived(void);
    void process(void);
    void display(void);
};

derived ::derived()
{
    //Default constructor of class derived.
    cout << "Default constructor of class derived invoked" << endl;
}

void derived ::process()
{
    data3 = data2 * getData1(); //data1 is private member of class base thats why we can not access it directly
}

void derived ::display()
{
    cout << "value of data1 = " << getData1() << endl;
    cout << "Value of data2 = " << data2 << endl;
    cout << "value of data3 = " << data3 << endl;
}

int main()
{
    //base b1;
    //b1.setData();
    derived d1;
    d1.setData();
    d1.process();
    d1.display();
    return 0;
}