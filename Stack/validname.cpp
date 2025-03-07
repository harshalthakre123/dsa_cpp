#include<iostream>
#include<stack>
using namespace std;
// for leet code(they give boiler plate)
bool valid(string s)
{
    if(s.size()>4)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    bool j=valid(name);
    if(j)
    {
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }


}