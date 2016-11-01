#include<iostream>
using namespace std;

template<typename T>
T total(T num){
	
	T total = 0, add;
	
	for(int i = 0; i<num; i++){
		cout<<"Input Number "<<i+1<<": ";
		cin>>add;
		total+=add;
	}
	
	return total;
}

int main(){
	int a;
	float b;
	int num;
	
	cout<<"Input The Data Type To be Totalled (1 for Int, 2 for float): ";
	cin>>num;
	cout<<"Input how many values: ";
	if(num==1)
	{
	cin>>a;
	cout<<"Total: "<<total(a);
	}
	else if(num==2)
	{
	cin>>b;
	cout<<"Total: "<<total(b);
	}
}
