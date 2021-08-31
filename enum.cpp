//This program is to understand enum.

#include<iostream>
using namespace std;

int main()
{
    enum Meal{breakfast,lunch,dinner};
    Meal m1=breakfast;
    Meal m2=lunch;
    Meal m3=dinner;
    cout<<"meal m1 is "<<m1<<endl;
    cout<<"meal m2 is "<<m2<<endl;
    cout<<"meal m3 is "<<m3<<endl;
    return 0;
}