//Function overloading.

#include<iostream>
using namespace std;

int volume(int s)
{
    return(s*s*s);
}

int volume(int r, int h)
{
    return((22/7)*r*r*h);
}

int volume(int l, int b, int h)
{
    return(l*b*h);
}
int main()
{
    cout<<"volume of cube of side 5 is "<<volume(5)<<endl;
    cout<<"volume of cylinder of radius 5 & height 7 is "<<volume(5,7)<<endl;
    cout<<"volume of cuboid of length 5 breadth 10 & height 2 is "<<volume(5,10,2)<<endl;
    return 0;
}