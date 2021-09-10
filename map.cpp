//This program is to understand map

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> marksmap;
    marksmap["Prakhar"] = 75;
    marksmap["Prashant"] = 95;
    marksmap["Brijesh"] = 85;
    marksmap.insert({{"Abhinav", 90}, {"Pulkit", 80}});
    map<string, int> ::iterator itr;
    for(itr = marksmap.begin(); itr != marksmap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    return 0;
}