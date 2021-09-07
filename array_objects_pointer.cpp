//This program is to understand array of objects using pointer.

#include<iostream>
#include<string>
using namespace std;

class product
{
    int id;
    string name;
    float price;
    public:
        void setData()
        {
            cout<<"Enter ID of product - "<<endl;
            cin>>id;
            cout<<"Enter name of product"<<endl;
            cin>>name;
            cout<<"Enter price of product - "<<endl;
            cin>>price;
        }
        void getData()
        {
            cout<<"Product ID - "<<id<<", Name - "<<name<<" & price - "<<price<<endl;
        }
};

int main()
{
    int size;
    cout<<"Enter no. of Products - "<<endl;
    cin>>size;
    product *product1 = new product[size];
    for(int i = 0; i < size; i++)
    {
        (product1 + i)->setData();
    }
    for(int i = 0; i < size; i++)
    {
        (product1 + i)->getData();
    }
    return 0;
}