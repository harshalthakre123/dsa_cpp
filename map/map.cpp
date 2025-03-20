//MAP:


//1. It is an associated container.
//2. It contains key and value
//3. It is sorted by default.
//4. key is always unique.
//5. Self balance Binary Search Tree or Red Black Tree maintain the lexicography order.
//6. There are three types of map.
//(i) ordered map (sorted) (red Black tree)
//(ii) unordered map (unsorted) (hashing technique)
//(iii) Multimap (duplicate values allowed).



#include<iostream>
#include<map>

using namespace std;
int main()
{

    map<int, string>student{{101, "Aman"}, {102, "Bhupendra jogi"}, {105, "Nikhil"},{103, "Harshal"}};
    for(auto p:student)
    {
        cout<<p.first<<", "<<p.second<<"\n";
    }


    cout<<"size="<<student.size()<<"\n";
    for(auto p=student.begin(); p!=student.end(); p++) // We can't use p=p+1 here because it is discontigous memory location(non-continous memory allocation) so we use pointer. 
    {
        cout<<p->first<<", "<<p->second<<"\n";
    }

}
