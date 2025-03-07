// Stack
// we cannot use stack in the database.
// 

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>st;
    st.push(100);
    st.push(20);
    st.push(300);
    st.push(40);
    st.push(50);

    // write a program to print smallest value of a given stack.

    // ht
    int small=st.top();
    // while(!st.empty())
    // {
    //     if(st.top()<small)
    //     {
    //         small=st.top();
    //     }
    //     st.pop();
    // }
    // cout<<small<<endl;

    //2nd solution for max
    int Large=st.top();
    while(!st.empty())
    {
        if(st.top()>Large)
        {
            Large=st.top();
        }
        st.pop();
    }
    cout<<Large<<endl;

// valid parenthesis
    // stack<char>bracket;

}