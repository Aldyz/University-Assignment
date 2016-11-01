#include<iostream>
using namespace std;

template<class T1, class T2>
float Minimum(T1 Num1, T2 Num2){
	if(Num1>Num2)
	return Num2;
	else 
	return Num1;
}

template<class T1, class T2>
float Maximum(T1 Num1, T2 Num2){
	if(Num1>Num2)
	return Num1;
	else 
	return Num2;
}

int main(){
	int a;
	float b;
	cout<<"Input an Integer: ";
	cin>>a;
	cout<<"Input a Float: ";
	cin>>b;
	
	cout<<"Maximum: "<<Maximum(a, b)<<endl;
	cout<<"Minumum: "<<Minimum(a,b);
}
