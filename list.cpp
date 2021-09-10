//This program is to understand list

#include <iostream>
#include <list>
using namespace std;

template <class T>
void addData(list<T> &l)
{
    int size;
    T element;
    cout << "Enter size of list - ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element to add to list - ";
        cin >> element;
        l.push_back(element);
    }
}

void display(list<int> &l)
{
    list<int>::iterator i;
    cout << "Displaying list - ";
    for (i = l.begin(); i != l.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;    //declaring list1 & list2
    addData(list1);     //adding elements in list1 & list2
    
    list<int> list2;
    addData(list2);
    
    cout << "List 1 = " << endl;    //displaying list1 & list2
    display(list1);
    cout << "List 2 = " << endl;
    display(list2);
    
    list1.swap(list2);      //swapping elements of list1 & list2
    
    cout << "List 1 = " << endl;
    display(list1);
    
    cout << "List 2 = " << endl;
    display(list2);
    
    list1.merge(list2);     //merging list1 & list2
    display(list1);
    
    list1.sort();       //sorting list1 & list2
    display(list1);
    return 0;
}