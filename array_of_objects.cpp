//This program is to understand Array of objects.

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id, salary;
    string name;

public:
    void setid(void);
    void setname(void);
    void setsal(void);
    void getid(void);
    void getname(void);
    void getsal(void);
};

void Employee ::setid()                          //Sets id of employee.
{
    cout << "Enter ID of Employee - " << endl;
    cin >> id;
}

void Employee ::setname()                        //sets name of employee.
{
    cout << "Enter Name of Employee - " << endl;
    cin >> name;
}

void Employee ::setsal()                         //sets salary of employee.
{
    cout << "Enter Salary of Employee - " << endl;
    cin >> salary;
}

void Employee ::getid()                          //Display id of employee. 
{
    cout << "ID of Employee - " << id << endl;
}

void Employee ::getname()                        //Display name of employee.
{
    cout << "Name of Employee - " << name << endl;
}

void Employee ::getsal()                         //Display salary of employee.
{
    cout << "Salary of Employee - " << salary << endl;
}

int main()
{
    Employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setid();
        fb[i].setname();
        fb[i].setsal();
        fb[i].getid();
        fb[i].getname();
        fb[i].getsal();
    }
    return 0;
}