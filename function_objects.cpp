//This program is to understan function objects

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {5, 3, 78, 24, 61, 98, 1};
    
    sort(arr, arr + 7);         //sort in ascending order.
    
    sort(arr, arr + 7, greater<int>());        //sort in descending order
    
    for(int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}