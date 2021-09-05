//This program is to understand virtual base class

#include<iostream>
using namespace std;

class student
{
    protected:
        int rno;
    public:
        student();
        void setrno();
        void getrno();
};

student :: student()
{
    //Default constructor of class student
}

void student :: setrno()
{
    cout<<"Enter roll number - "<<endl;
    cin>>rno;
}

void student :: getrno()
{
    cout<<"Roll number = "<<rno<<endl;
}

class test : virtual public student
{
    protected:
        float math, phy;
    public:
        test();
        void setmarks();
        void getmarks();
};

test :: test()
{
    //Default constructor of class test
}

void test :: setmarks()
{
    cout<<"Enter marks of Math & Physics - "<<endl;
    cin>>math>>phy;
}

void test :: getmarks()
{
    cout<<"Marks obtained in Math = "<<math<<endl;
    cout<<"Marks obtained in Physics = "<<phy<<endl;
}

class sport : virtual public student
{
    protected:
        int score;
    public:
        sport();
        void setscore();
        void getscore();
};

sport :: sport()
{
    //Default constructor of class sport
}

void sport :: setscore()
{
    cout<<"Enter score - "<<endl;
    cin>>score;
}

void sport :: getscore()
{
    cout<<"Score obtained - "<<score<<endl;
}

class result : public test, public sport
{
    float total;
    public:
        result();
        void setdata();
        void display();
};  

result :: result()
{
    //Default constructor of class result.
}

void result :: display()
{
    getrno();
    getmarks();
    getscore();
    total = math + phy + score;
    cout<<"Percentage = "<<total/3<<"%"<<endl;
}

void result :: setdata()
{
    setrno();
    setmarks();
    setscore();
}

int main()
{
    result r;
    r.setdata();
    r.display();
    return 0;
}