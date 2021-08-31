// This program is to check wether given no. is binary or not & to print its 1's complement.

#include<iostream>
#include<string>
using namespace std;

class Binary
{
    private:
        string s;
        void check_binary(void);    //Private function of class Binary.

    public:
        void read(void);
        void ones(void);
        void write(void);
};

void Binary :: read()
{
    cout<<"Enter a Binary number - "<<endl;
    cin>>s;
}

void Binary :: check_binary()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Input"<<endl;
            exit(0);
        }
    }
}

void Binary :: ones()
{
    check_binary();    //Nesting of member function.
    for(int j=0;j<s.length();j++)
    {
        if(s.at(j)=='0')
        {
            s.at(j)='1';
        }
        else
        {
            s.at(j)='0';
        }
    }
}

void Binary :: write()
{
    cout<<s<<endl;
}

int main()
{
    Binary b;
    b.read();
    //b.check_binary();    //This will throw error because check_binary is private function of class Binary.
    b.ones();
    b.write();    
    return 0;
}