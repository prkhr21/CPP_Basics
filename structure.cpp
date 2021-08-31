//This program is to understand structures.

#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char initial;
    float salary;
} ep;
int main()
{
    ep prakhar;
    prakhar.eId=1;
    prakhar.initial='P';
    prakhar.salary=1200000;
    cout<<"Empolyee Id = "<<prakhar.eId<<endl;
    cout<<"Initial = "<<prakhar.initial<<endl;
    cout<<"Salary = "<<prakhar.salary<<endl;
    return 0;
}