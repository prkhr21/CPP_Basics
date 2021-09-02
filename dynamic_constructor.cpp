//This progrma is to understand Dynamic constructor.

#include<iostream>
#include<string>
using namespace std;

class bankdeposit
{
    int principal, years;
    float rate, amount;

    public:
        bankdeposit(void);
        bankdeposit(int, int, int);
        bankdeposit(int, int, float);
        void show(void);
};

bankdeposit :: bankdeposit()
{
    //Default constructor.
    cout<<"No value Entered"<<endl;
    principal = 0;
    years = 0;
    rate = 0;
    amount = 0;
}

bankdeposit :: bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r)/100;
    amount = p;
    for(int i = 0; i < y; i++)
    {
        amount = amount * (1+rate);
    }
}

bankdeposit :: bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    amount = p;
    for(int i = 0; i < y; i++)
    {
        amount = amount * (1+r); 
    }
}

void bankdeposit :: show()
{
    cout<<"Principal amount is "<<principal<<". Return value after "<<years
        <<" is "<<amount<<endl;
}

int main()
{
    int p,y,r;
    float R;
    cout<<"Enter Principal amount, Years & Rate"<<endl;
    cin>>p>>y>>r;
    bankdeposit bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout<<"Enter Principal amount, Years & Rate"<<endl;
    cin>>p>>y>>R;
    bankdeposit bd2 = bankdeposit(p, y, R);
    bd2.show();

    bankdeposit bd3 = bankdeposit();
    bd3.show();
    return 0;
}