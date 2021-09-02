//This program is to understand destructor.

#include <iostream>
#include <string>
using namespace std;

int count = 0;

class number
{
    int num;

public:
    number(void);
    ~number(void); //declaration of destructor.
};

number ::number()
{
    count++;
    cout << "constructor is called for object number " << count << endl;
}

number ::~number() //defination of destructor.
{
    cout << "destructor is called for object number " << count << endl;
    count--;
}

int main()
{
    cout << "entering main function" << endl
         << "creating first object" << endl;
    number n1; //scope of object created inside the block is only inside the block.
    {
        cout << "entering block" << endl
             << "creating two more objects" << endl;
        number n2, n3;
        cout << "exiting block" << endl;
    } //as soon as block exited objects created inside block is destroyed.
    cout << "exiting main function" << endl;
    return 0;
}