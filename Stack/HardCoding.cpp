//Hard Coding
// New is used to create heap memory(runtime)
//At empty stack, top value= -1.
#include<iostream>
#include<stack>
using namespace std;
class Stackk
{
    public:
    int *arr;
    int n, top;
    Stackk(int s)
    {
        n=s;
        arr=new int[n];
        top=-1;
    }
    void pushh(int v)
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow:\n";
            return;
        }
        top++;
        arr[top]
    
    }
};

int main()
{

}