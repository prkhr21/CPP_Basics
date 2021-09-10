//This program is to understand vector.

#include<iostream>
#include<vector> //to use vector & its methods.
using namespace std;

template<class T> //template function
void display(vector<T> &v)
{
    cout<<"Displaying Vector - "<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; //alternative - v.at(i) produce same result.
    }
    cout<<endl;
    cout<<"Size of vector = "<<v.size()<<endl;
}

template<class T>
void addData(vector<T> &v)
{
    int size;
    T element;
    cout<<"Enter size of vector - "<<endl;
    cin>>size;
    
    for(int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector - ";
        cin>>element;
        v.push_back(element); //pushes elements at end in vector.
    }
}

int main()
{
    vector<int> vec1; //vector of type integer.
    addData(vec1);
    display(vec1); 
    vec1.pop_back();
    vec1.pop_back();
    display(vec1);

    //iterator is an object that point to an element inside the conatiner.
    vector<int> :: iterator i; //iterator declaration.
    i = vec1.begin(); //iterator pointing at the beginning of vector
    vec1.insert(i, 2121); //it inserts before the element it is pointing
    display(vec1);
    vec1.insert(i + 3, 2, 19876); //2 represent no. of copies of 19876 inserted before i + 3.
    display(vec1);

    vector<float> vec2; //vector of type float.
    addData(vec2);
    display(vec2);
    
    vector<char> vec3; //vector of type character.
    addData(vec3);
    display(vec3);

    vector<int> vec4(5, 10);
    display(vec4);
    vector<int> vec5(vec4);
    display(vec5);
    return 0;
}