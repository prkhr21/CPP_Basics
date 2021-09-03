//This program is to understand inheritance.

#include <iostream>
#include <string>
using namespace std;

class employee //Base class.
{
    //Private member & method of base class is not inherited by derived class.
    //Only public members and method of base class is inherited by derived class.
public:
    int id, salary;
    string name;
    employee(void);
    void setData(void);
    void getData(void);
};

employee ::employee()
{
    //default constructor of class employee.
    cout << "Default constructor of employee class invoked." << endl;
}

void employee ::setData()
{
    cout << "Enter ID, Name & salary of Employee - " << endl;
    cin >> id >> name >> salary;
}

void employee ::getData()
{
    cout << "Employee ID - " << id << endl;
    cout << "Employee Name - " << name << endl;
    cout << "Employee Salary - " << salary << endl;
}

//Syntax for inheritance -
//class derived_class_name : visibility_mode base_class_name

//visibility mode -
//  => public - all public members and methods of base class are inherited as
//              public member and methods of derived class
//  => private - all public members and methods of base class are inherited as
//               private memners and methods of derived class.

class programmer : public employee //Derived class.
{
public:
    int languagecode = 10;
    programmer(void);
};

programmer ::programmer()
{
    //Default constructor of class programmer.
    cout << "Default constructor of programmer class invoked" << endl;
}

int main()
{
    employee e1;
    e1.setData();
    e1.getData();
    programmer p1; //Every time an object of derived class is created default constructor of base class is ivoked.
    p1.setData();
    p1.getData();
    return 0;
}