//This program is to understand virtual function

#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base = 21;
        virtual void display()
        {
            cout<<"1. Displaying base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived = 11;
        void display()
        {
            cout<<"2. Displaying base class variable var_base "<<var_base<<endl;
            cout<<"3. Displaying derived class variable var_derived "<<var_derived<<endl;
        }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass base_class_obj;
    DerivedClass derived_class_obj;
    base_class_pointer = & derived_class_obj;
    base_class_pointer->display();  
    return 0;
}