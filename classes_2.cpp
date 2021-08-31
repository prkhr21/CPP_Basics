#include<iostream>
using namespace std;

class Animals
{
    public:
        void eat();
        void sleep();
        void breath();
};

void Animals :: eat()
{
    cout<<"Eating"<<endl;
}

void Animals :: sleep()
{
    cout<<"Sleeping"<<endl;
}

void Animals :: breath()
{
    cout<<"Breathing"<<endl;
}
int main()
{
    Animals dog;
    dog.breath();
    dog.eat();
    dog.sleep();
    return 0;
}