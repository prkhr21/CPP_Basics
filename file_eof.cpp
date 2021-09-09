//This program is to understand eof ->  end of file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s;
    ofstream out;
    out.open("sample.txt");
    out<<"Hello my name is Alpha Beta Gama"<<endl;
    out<<"I am 24 years old"<<endl;
    out<<"I like PC gaming"<<endl;
    out.close();
    ifstream in;
    in.open("sample.txt");
    while(in.eof() == 0)
    {
        getline(in, s);
        cout<<s<<endl;
    }
    in.close();
    return 0;
}