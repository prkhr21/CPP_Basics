//This program computes distance between 2 given coordinates.

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class coordinate;
float distance(coordinate, coordinate);

class coordinate
{
    int x, y;

    public:
        coordinate(int, int);
        void display(void);
        friend float distance(coordinate, coordinate);
};

coordinate :: coordinate(int a, int b)
{
    x = a;
    y = b;
}

void coordinate :: display()
{
    cout<<"coordinate = ("<<x<<", "<<y<<")"<<endl;
}

float distance(coordinate p, coordinate q)
{
    float n1 = ((q.x - p.x) * (q.x - p.x));
    float n2 = ((q.y - p.y) * (q.y - p.y));
    float result = sqrt(n1 + n2);
    return result;
}

int main()
{
    coordinate x(0, 0);
    coordinate y(0, 2);
    x.display();
    y.display();
    float dis = distance(x, y);
    cout<<"The distance between given coordinate is "<<dis<<endl;
    return 0;
}