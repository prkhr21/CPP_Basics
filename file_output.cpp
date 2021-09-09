//This program is to understan file output.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s = "Hello, How are you, Have a nice day";
    //Opening file using constructor and writing to it. 
    ofstream out("sample.txt"); //Write operation
    out<<s;
    return 0;
}