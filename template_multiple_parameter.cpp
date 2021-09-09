//This program is to understand template with multiple parameter

#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Myclass
{
    T1 var1;
    T2 var2;
    public:
        Myclass(T1 a, T2 b)
        {
            var1 = a;
            var2 = b;
        }
        void display()
        {
            cout<<"var1 = "<<var1<<" & var2 = "<<var2<<endl;
        }
};

int main()
{
    Myclass<int, float> m1(21, 11.1997);
    m1.display();
    Myclass<int, string> m2(21, "Nov");
    m2.display();
    Myclass<string, double> m3("Nov", 2111.1997);
    m3.display();
    return 0;
}