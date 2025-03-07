// Q2 Same as upper but vector size is different.
// v1={1, 2, 3}, v2={5, 6, 7, 8}, o/p={5, 7, 3, 7}

// ANS- Q2.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter size of 1st vector";
    cin>>n;
    vector<int>v3(n);
    for(auto i=0; i<n; i++)
    {  
        cout<<"Enter "<<i+1<<" Values";
        cin>>v3[i];
    }
    cout<<endl;
    for(auto i=0; i<n; i++)
    {  
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    


    
    int n2;
    cout<<"Enter size of 2nd vector ";
    cin>>n2;
    vector<int>v4(n2);

    for(auto i=0; i<n2; i++)
    {
        cout<<"Enter "<<i+1<<" values";
        cin>>v4[i];
    }
    cout<<endl;
    for(auto i=0; i<n2; i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    cout<<"output is: ";
    
    
    int d;
    if(n>n2)
    {
        d=n-n2;
        for(int i=0; i<d; i++)
        {
            v4.insert(v4.begin(), 0);
        }
    }
    else
    {
        d=n2-n;
        for(int i=0; i<d; i++)
        {
            v3.insert(v3.begin(), 0);
        }   
    }

    cout<<"output is: ";
    for(auto i=0; i<v3.size(); i++)
    {
        cout<<v3[i]+v4[i]<<" ";
    }

}