#include<iostream>
using namespace std;

//problem 4

int multiply(int x, int y){
	if(x>0)
	return y + multiply(x-1,y);
	else
	return 0;
}

int main(){
	
	cout<<multiply(7, 4);
}
