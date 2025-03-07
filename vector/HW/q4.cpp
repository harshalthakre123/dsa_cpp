// Q4 v={4, 1, 2, 5, 1, 2, 4} print unique values in ascending order.

// ANS-Q4

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

    vector<int>v={10, 20, 30, 10, 20, 50, 50, 40, 50};
    sort(v.begin(), v.end());
   
    int x=1;
    for(auto i=1; i<v.size(); i++)
    {
        if(v[x-1]!=v[i])
        {
            v[x]=v[i];
            x++;
        }
    }
    

    for(int i=0; i<x; i++)
        {
            cout<<v[i]<<" ";
        }

   
   
   
   
    // for(auto i=0; i<v.size(); i++)
    // {
    //     int x=i;
    //     for(int j=i+1; j<v.size(); j++)
    //     {
    //         if(v[i]==v[j])
    //         {
    //             v.erase(v.begin()+j);
    //         }

    //     }
    // }
    

    // for(int i=0; i<v.size(); i++)
    //     {
    //         cout<<v[i]<<" ";
    //     }


    



    


}