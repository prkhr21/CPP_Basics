#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name, content;
    ofstream out("sample.txt");
    cout<<"Enter your name - "<<endl;
    cin>>name;
    out<<"My name is " + name;
    out.close();
    ifstream in("sample.txt");
    getline(in, content);
    cout<<content;
    in.close();
    return 0;
}