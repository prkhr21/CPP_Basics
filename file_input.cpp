//This program is to understand file input

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s;
    //Opening a file using constructor and reading from it.
    ifstream in("Sample.txt"); //Read operation
    getline(in, s);
    cout<<s<<endl;
    getline(in, s);
    cout<<s<<endl;    
    return 0;
}