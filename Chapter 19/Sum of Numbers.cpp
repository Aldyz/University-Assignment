#include<iostream>
using namespace std;

//problem 5

int sum(int n){
	if(n>0)
	return n + sum(n-1);
	else
	return 0;
}

int main(){
	cout<<sum(100);
}
