// Singlee linked list is called as Forward List and Doublee linked list is called as List.
// In directed graph we use Forward list. single or uni direction.
// we do not have to initialize it because is it is treated as array if we initialize it directly.  
// Int forward list we use distance() function to evaluate the size of singlee list.

#include<iostream>
#include<forward_list>
using namespace std;
int main()
    {
        forward_list<int>f;
        f.push_front(12);
        f.push_front(15);
        f.push_front(16);
        f.push_front(18);
        f.push_front(18);
        f.push_front(21);


        forward_list<int>f2;
        f2.push_front(91);
        f2.push_front(95);
        f2.push_front(699);
        f2.push_front(18);
        f2.push_front(21);
        

        cout<<"l1- ";
        for(auto p:f)
        {
            cout<<p<<"\t";
        }
        
        // f.pop_front();
        
        cout<<endl<<"L2:- ";

        for(auto p:f2)
        {
            cout<<p<<"\t";
        }
    
        cout<<"\nSize(): "<<distance(f.begin(), f.end());

        f.reverse();
        cout<<"\nReversed: ";
        for(auto p:f)
        {
            cout<<p<<"\t";
        }
        cout<<endl;


        f.sort();
        f2.sort();
        cout<<"Sorted: "<<endl;
        cout<<"L1- ";
        for(auto p:f)
        {
            cout<<p<<"\t";
        }

        cout<<endl;
        
        
        f.unique();

        cout<<"Unique: ";
        for(auto p:f)
        {
            cout<<p<<"\t";
        }

        cout<<endl;

        f.merge(f2);
        cout<<"Merged: ";
        for(auto p:f)
        {
            cout<<p<<"\t";
        }
        
        



    }
