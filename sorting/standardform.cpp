#include<iostream>
using namespace std;

class top
{
    public: void show(int arr[], int s)
    {
        for(int i=0; i<s; i++)
        {
            cout<<arr[i];
            if(i<s-1)
            {
                cout<<",";
            }
        }
    }
};
int main()
{/*
    int a[5]={3, 1, 4, 2, 8};
    int s=sizeof(a)/sizeof(a[0]);
    top p;
    p.show(a, s);*/
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int a[n];
    int s=sizeof(a)/sizeof(a[0]);
    cout<<"enter "<<n<<" values\n";
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    top p;
    if(n==0)
    {
        cout<<"no data";
    }
    else{
        p.show(a, s);       
    }
}