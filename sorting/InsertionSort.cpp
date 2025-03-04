#include<iostream>
using namespace std;
class insertSort{
    public:
    void insert(int arr[],int s){
         
         for(int i=1;i<s;i++){
            int j=i;
            while(j>0 && arr[j]<arr[j-1]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
         }
    }
};
int main(){
    int a[]={2,4,1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    insertSort s;
    s.insert(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
}













// HT



// #include<iostream>
// using namespace std;

// class insert{
// public: void sorting(int a[], int s)
//     {
//         for(int i=1; i<=s; i++)
//         {
//         int chotu=i;
//             while(chotu>=0 && a[chotu]<a[chotu-1])
//             {
//                 int temp=a[chotu-1];
//                 a[chotu-1]=a[chotu];
//                 a[chotu]=temp;
//                 chotu--;
//             }
//         }
//     }

// };
// int main()
// {
//     int n, s;
//     cout<<"Enter the size of an array:";
//     cin>>n;
//     int a[n];

//     cout<<"enter the "<<n<<" values:";
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }

//     for(int i=0; i<n; i++)
//     {
//         if(i==n-1)
//         {
//             cout<<a[i];
//         }
//         else{
//             cout<<a[i]<<",";
//         }
//     }
//     s=sizeof(a)/sizeof(a[0]);
//     cout<<"\nsorted array is"<<endl;
//     insert obj;
//     if(s>0)
//     {
//         obj.sorting(a, s);
//         for(int i=0; i<s; i++)
//         {
//             if(i==s-1)
//             {
//                 cout<<a[i];
//             }
//             else{
//                 cout<<a[i]<<",";
//             }
//         }
//     }
//     else
//     {
//         cout<<"no-data";
//     }

// }