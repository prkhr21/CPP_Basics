//This program is to understand multilevel inheritance.
//class A => class B => class C
//A derives B & B derives C.

#include<iostream>
#include<string>
using namespace std;

class student
{
    protected:
        int rollnumber;
        string name;
    public:
        student(void);
        void setdata();
        void getdata();
};

student ::student()
{
    cout<<"Default constructor of class student invoked"<<endl;
}

void student ::setdata()
{
    cout<<"Enter roll number & name of student"<<endl;
    cin>>rollnumber>>name;
}

void student ::getdata()
{
    cout<<"Roll number = "<<rollnumber<<endl;
    cout<<"Name = "<<name<<endl; 
}

class exam : protected student
{
    protected:
        int math, phy, chem;
    public:
        exam();
        void setmarks();
        void getmarks();
};

exam ::exam()
{
    cout<<"Default constructor of class exam invoked"<<endl;
}

void exam ::setmarks()
{
    cout<<"Enter marks of Math, Physics, Chemistry - "<<endl;
    cin>>math>>phy>>chem;
}

void exam ::getmarks()
{
    cout<<"Marks obtained in math - "<<math<<endl;
    cout<<"Marks obtained in physics - "<<phy<<endl;
    cout<<"Marks obtained in chemistry - "<<chem<<endl;
}

class result : protected exam
{
    protected:
        float percentage = 0;
    public:
        result();
        void create();
        void display();
};

result ::result()
{
    cout<<"Default constructor of class result invoked"<<endl;
}

void result ::create()
{
    setdata();
    setmarks();
}

void result ::display()
{
    percentage = (math + phy + chem)/3;
    getdata();
    getmarks();
    cout<<"Percentage = "<<percentage<<endl;
}

int main()
{
    result s1,s2;
    s1.create();
    s1.display();
    s2.create();
    s2.display();
    return 0;
}