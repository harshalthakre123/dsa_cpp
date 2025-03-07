// Q3 v1={1, 2, 3},sum of v1=1+2+3,  v2={3, 4, 5} sum of v2=3+4+5
// print the greater one or equal.

// ANS- Q3

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a={1, 2, 3, 4};
    int sum=0;
    for(auto i=0; i<a.size(); i++)
    {
        sum=sum + a[i];
    }  

    vector<int>b={5, 6, 7};
    int sum2=0;
    for(auto i=0; i<b.size(); i++)
    {
        sum2=sum2 + b[i];
    }

    if(sum>sum2)
    {
        cout<<"sum of vector a is greater: "<<sum;
    }
    else if((sum<sum2))
    {
        cout<<"sum of vector b is greater: "<<sum2;
    }
    else
    {
        cout<<"Sum of both vector is equal: "<<sum;
    }

}
