//This program is to understand protected access modifier.

#include <iostream>
using namespace std;

class base
{
    int data1; //private member of base class can not be inherited by derived class.

protected:
    int data2; //protected member of class base.

    //protected members of class are just like private but they can be inherited by derived class.

public:
    int data3;
    base(void);
    void setData(void);
    int getData1(void);
    int getData2(void);
    int getData3(void);
};

base ::base()
{
    //Default constructor of class base.
    cout << "Default constructor of class base invoked" << endl;
}

void base ::setData()
{
    cout << "Enter 3 numbers - " << endl;
    cin >> data1 >> data2 >> data3;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

int base ::getData3()
{
    return data3;
}

class derived : protected base
{
    int data4;

public:
    derived(void);
    void operation(void);
    void display(void);
};

derived ::derived()
{
    //Default constructor of class derived.
    cout << "Default constructor of class derived invoked" << endl;
}

void derived ::operation()
{
    setData();
    data4 = data3 + data2 + getData1();
}

void derived ::display()
{
    cout << "Value of data1 = " << getData1() << endl;
    cout << "Value of data2 = " << data2 << endl;
    cout << "Value of data3 = " << data3 << endl;
    cout << "Value of data4 = " << data4 << endl;
}

int main()
{
    derived d;
    //d.setData();  //setData is public method of class base
    //but it is inherited as protected in class derived
    //therefore we can not access it from main directly.
    d.operation();
    d.display();
    return 0;
}