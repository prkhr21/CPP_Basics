//This program is to understand run time polymorphism

#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base;
        void display()
        {
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived;
        void display()
        {
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
        }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass base_class_obj;
    DerivedClass derived_class_obj;
    base_class_pointer = & derived_class_obj;
    base_class_pointer->var_base = 11; 
    base_class_pointer->display();
    base_class_pointer = & base_class_obj;
    base_class_pointer->var_base = 59;
    base_class_pointer->display();
    DerivedClass * derived_class_pointer;
    derived_class_pointer = & derived_class_obj;
    derived_class_pointer->var_base = 2111;
    derived_class_pointer->var_derived = 1997;
    derived_class_pointer->display();
    return 0;
}