#include<iostream>
#include<string>
using namespace std;

class Employee
{
    protected:
        int id;
        string name;
        float salary;
    public:
        Employee(int id, string name, float salary)
        {
            this->id = id;
            this->name = name;
            this->salary = salary;
        }
        virtual void display()
        {
            cout<<"Display function of class Employee"<<endl;
        }
};

class Programmer : public Employee
{
    protected:
        string language;
    public:
        Programmer(int idp, string namep, float salaryp, string language) : Employee(idp, namep, salaryp)
        {
            this->language = language;
        }
        void display()
        {
            cout<<"Programmer ID - "<<id<<endl;
            cout<<"Programmer Name - "<<name<<endl;
            cout<<"Programmer Salary - "<<salary<<endl;
            cout<<"programmer Language - "<<language<<endl;
        }
};

class Tester : public Employee
{
    protected:
        string category;
    public:
        Tester(int idt, string namet, float salaryt, string category) : Employee(idt, namet, salaryt)
        {
            this->category = category;
        }
        void display()
        {
            cout<<"Tester ID - "<<id<<endl;
            cout<<"Tester Name - "<<name<<endl;
            cout<<"Tester Salary - "<<salary<<endl;
            cout<<"Tester Type - "<<category<<endl;
        }
};

int main()
{
    Employee * e[2];
    Programmer p(101, "ALPHA", 100000, "CPP");
    Tester t(102, "BETA", 150000, "Funtional");
    e[1] = & p;
    e[2] = & t;
    e[1]->display();
    e[2]->display();
    return 0;
}