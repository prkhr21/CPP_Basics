//This program is to understand copy constructor.

#include <iostream>
#include <string>
using namespace std;
class number
{
    int num;

public:
    number(void);
    number(int);
    number(number &);
    void display(void);
};

number ::number()
{
    //Default constructor
    cout<<"!!!default constructor invoked!!!"<<endl;
    num = 0;
}

number ::number(int val)
{
    cout<<"!!!parameterized constructor invoked!!!"<<endl;
    num = val;
}

number ::number(number &obj)
{
    cout << "!!!copy constructor invoked!!!" << endl;
    num = obj.num;
}

void number ::display()
{
    cout << "The value of Number = " << num << endl;
}

int main()
{
    number n1;
    n1.display();
    number n2(11);
    n2.display();
    number n3(n1); //copy constructor invoked
    n3.display();
    number n4 = n2; //copy constructor invoked
    n4.display();
    number n5; //copy constructor not invoked
    n5 = n1;
    n5.display();
    number n6; //default constructor invoked
    n6 = 21; //parameterized constructor invoked
    n6.display();
    return 0;
}