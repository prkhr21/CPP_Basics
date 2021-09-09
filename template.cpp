//This program is to understand template.

#include<iostream>
using namespace std;

template <class T>
class Vector
{
    public:
        T *arr;
        int size;
        Vector(int m)
        {
            size = m;
            arr = new T[size];
        }
        T dotProduct(Vector &v)
        {
            T d = 0;
            for(int i = 0; i < size; i++)
            {
                d = d + (this->arr[i] * v.arr[i]);
            }
            return d;
        }

};

int main()
{
    //Class Vector with data type int ->

    // Vector <int>v1(3);   
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // Vector <int>v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;

    //Class Vector with data type float ->

    Vector <float>v1(3);
    v1.arr[0] = 4.5;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.6;
    Vector <float>v2(3);
    v2.arr[0] = 1.4;
    v2.arr[1] = 0.2;
    v2.arr[2] = 1.3;

    float result = v1.dotProduct(v2);
    cout<<"Result = "<<result<<endl;
    return 0;
}