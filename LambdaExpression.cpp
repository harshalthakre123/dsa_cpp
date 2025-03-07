//Lambda function- function is used as parameter and it is ananomous, only one time usable and we can call it imediately and cannot call again because of ananomous nature. use and throw code
// initilization []()

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int main()
{

    vector<int>v={4, 1, 3, 2, 7};
    sort(v.begin(), v.end());

    for(auto p: v)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
//    Examples:
    // cout<<[](int a){return a+10;}(5);
    
    // cout<<[](int a, int b){return a>b;}(5, 40);

    // auto k=[](int a){return a*a;};
    // cout<<k(7);  //function pointer is used to call lambda function.

    vector<int>v1={4, 1, 3, 2, 7};
    // sort(v1.begin(), v1.end(), less<int>());
    // sort(v1.begin(), v1.end(), greater<int>());
    sort(v1.begin(), v1.end(), [](int a , int b){return a>b;}); //for descending order.
    for(auto p1: v1)
    {
        cout<<p1<<"\t";
    }
    


}