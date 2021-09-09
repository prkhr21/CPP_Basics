//This program is to understand template with default parameter.

#include<iostream>
using namespace std;

template<class T1 = int, class T2 = float>
class Alpha
{
    T1 var1;
    T2 var2;
    
    public:
        Alpha(T1 a, T2 b)
        {
            var1 = a;
            var2 = b;
        }
        void display()
        {
            cout<<"The value of var1 = "<<var1<<" & var2 = "<<var2<<endl;
        }
};

int main()
{
    Alpha<> a1(21, 11.97);
    a1.display();
    Alpha<float, int> a2(97.11, 21);
    a2.display();
    Alpha<string, string> a3("Prakhar", "Kothari");
    a3.display();
    return 0;
}