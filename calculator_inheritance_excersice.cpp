#include <iostream>
#include <cmath>
using namespace std;

class simplecal
{
protected:
    float num1, num2;

public:
    simplecal();
    void operations();
};

simplecal ::simplecal()
{
    //Default constructor of class simplecal.
}

void simplecal ::operations()
{
    cout << "****MENU****" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Divison" << endl;
    cout << "Enter your choice - " << endl;
    int choice;
    cin >> choice;
    cout << "Enter 2 no. - " << endl;
    cin >> num1 >> num2;
    switch (choice)
    {
    case 1:
    {
        cout << "Sum = " << num1 + num2 << endl;
        break;
    }
    case 2:
    {
        cout << "Difference = " << num1 - num2 << endl;
        break;
    }
    case 3:
    {
        cout << "Product = " << num1 * num2 << endl;
        break;
    }
    case 4:
    {
        cout << "Divison = " << num1 / num2 << endl;
        break;
    }
    default:
    {
        cout << "INVALID INPUT" << endl;
        break;
    }
    }
}

class scical
{
protected:
    float num3;

public:
    scical();
    void operations1();
};

scical ::scical()
{
    //Default constructor of class scical.
}

void scical ::operations1()
{
    int choice1;
    cout << "****MENU****" << endl;
    cout << "1. SIN" << endl;
    cout << "2. COS" << endl;
    cout << "3. TAN" << endl;
    cout << "4. LOG10" << endl;
    cout << "Enter your choice - " << endl;
    cin >> choice1;
    cout << "Enter a no. - " << endl;
    cin >> num3;
    switch (choice1)
    {
    case 1:
    {
        cout << "SIN (" << num3 << ") = " << sin(num3) << endl;
        break;
    }
    case 2:
    {
        cout << "COS (" << num3 << ") = " << cos(num3) << endl;
        break;
    }
    case 3:
    {
        cout << "TAN (" << num3 << ") = " << tan(num3) << endl;
        break;
    }
    case 4:
    {
        cout << "LOG10 (" << num3 << ") = " << log10(num3) << endl;
        break;
    }
    default:
    {
        cout << "INVALID INPUT" << endl;
        break;
    }
    }
}

class hybridcal : public simplecal, public scical
{
public:
    hybridcal();
    void choose();
};

hybridcal ::hybridcal()
{
    //Default constructor of class hybridcal
}

void hybridcal ::choose()
{
    cout << "****MENU****" << endl;
    cout << "1. Simple Calculator" << endl;
    cout << "2. Scintific Calculator" << endl;
    cout << "3. EXIT" << endl;
    cout << "Enter your choice - " << endl;
    int choice2;
    cin >> choice2;
    switch (choice2)
    {
    case 1:
    {
        operations();
        break;
    }
    case 2:
    {
        operations1();
        break;
    }
    case 3:
    {
        cout << "THANK YOU ---- prkhr21" << endl;
        exit(0);
    }
    default:
    {
        cout << "INVALID INPUT" << endl;
        break;
    }
    }
}

int main()
{
    while (1)
    {
        hybridcal c;
        c.choose();
    }
    return 0;
}