#include<iostream>
using namespace std ; 
template <typename t1>
t1 sum(t1 a , t1 b ){
	return a+b;
}

template <typename t1 , typename t2>
t1 mul(t1 a , t2 b ){
	return a*b;
}
int main (){
	cout<<sum(4,6)<<endl;
		cout<<mul(4.2,6);
}
