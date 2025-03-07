// Questions of vector.
// Q1. v1={1, 2, 3}, v2={3, 4, 5} o/p= {3, 7, 9}

// ANS-1

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1(3);
    for(auto i=0; i<3; i++)
    {  
        cout<<"Enter "<<i+1<<" Values";
        cin>>v1[i];
    }
    cout<<endl;
    for(auto i=0; i<v1.size(); i++)
    {  
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    
    vector<int>v2(3);
    for(auto i=0; i<3; i++)
    {
        cout<<"Enter "<<i+1<<" values";
        cin>>v2[i];
    }
    cout<<endl;
    for(auto i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"output is: ";
    
    for(auto i=0; i<3; i++)
    {
        cout<<v2[i]+v1[i]<<" ";
    }

}