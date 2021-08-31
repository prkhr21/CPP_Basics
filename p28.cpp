#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void);
    void getData(void);
    static void getCount(void);
};

void Employee ::setData()
{
    cout << "Enter Employee ID - " << endl;
    cin >> id;
    count++;
}

void Employee ::getData()
{
    cout << "The ID of Employee no. " << count << " is " << id << endl;
}

void Employee :: getCount()
{
    cout<<"The value of count is "<<count<<endl;
}

int Employee ::count;

int main()
{
    Employee Prakhar, Prashant, Brijesh;

    Prakhar.setData();
    Prakhar.getData();
    Employee::getCount();

    Prashant.setData();
    Prashant.getData();
    Employee::getCount();

    Brijesh.setData();
    Brijesh.getData();
    Employee::getCount();
    
    return 0;
}