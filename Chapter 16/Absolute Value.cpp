#include<iostream>
using namespace std;

template<class T>
T AbsoluteValue(T num){
	if(num<0)
	return num*-1;
	else
	return num;
}

int main(){
	int a = -5;
	float b = -3.14;
	
	cout<<AbsoluteValue(a)<<endl;
	cout<<AbsoluteValue(b);
}
