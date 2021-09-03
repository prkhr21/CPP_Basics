//This program is to understan multilevel inheritance

#include<iostream>
#include<string>
using namespace std;

class student
{
    int roll_number;
    string name;

    public:
        student(void);
        void setData(void);
        void getData(void);
};

student ::student()
{
    //Default constructor of class student.
    cout<<"Default constructor of class student invoked."<<endl;
}

void student ::setData()
{
    cout<<"Enter roll number & name of student - "<<endl;
    cin>>roll_number>>name;
}

void student ::getData()
{
    cout<<"roll number & name of student - "<<roll_number<<" & "<<name<<endl;
}

class exam : public student
{
    float marks_math, marks_physics, marks_chemistry;

    public:
        exam(void);
        void setMarks(void);
        void getMarks(void);
};

exam ::exam()
{
    //Default constructor of class exam.
    cout<<"Default constructor of class exam invoked."<<endl;
}

void exam ::setMarks()
{
    cout<<"Enter marks of maths, physics & chemistry - "<<endl;
    cin>>marks_math>>marks_physics>>marks_chemistry;
}

void exam ::getMarks()
{
    cout<<"Marks obtained in math - "<<marks_math<<endl;
    cout<<"Marks obtained in physics - "<<marks_physics<<endl;
    cout<<"Marks obtained in chemistry - "<<marks_chemistry<<endl;
}

class result : public exam
{
    
};

int main()
{
    
    return 0;
}