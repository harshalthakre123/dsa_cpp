#include<iostream>
using namespace std;

class bubble
{
    public: int sorting(int a[], int s)
    {
        
        int count=0;
        bool f=true;
        for(int i=0; i<s; i++)
        {
            int swap=0;
            
            for(int j=0; j<s; j++)
            {
                int temp=0;
                if(a[j]>a[j+1])
                {
                    count++;
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                    f= false;
                    swap++;
                }
            }
            cout<<"\nSwap in "<<i+1<<" pass is "<<swap;
            if(f==true)
            {
                break;
            }
        }
        cout<<"\nTotal Swap is: "<< count<<endl;
    
        return a[s];
    }
};

int main()
{
    int n, s;
    cout<<"Enter the size of an array:";
    cin>>n;
    int a[n];

    cout<<"enter the "<<n<<" values:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Your array is: \n";
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
        {
            cout<<a[i];
        }
        else{
            cout<<a[i]<<",";
        }
    }
    s=sizeof(a)/sizeof(a[0]);
    bubble obj;
    if(s>0)
    {
        obj.sorting(a, s);
        for(int i=0; i<s; i++)
        {
            if(i==s-1)
            {
                cout<<a[i];
            }
            else{
                cout<<a[i]<<",";
            }
        }
    }
    else
    {
        cout<<"no-data";
    }

    

}