#include<iostream>
using namespace std;

//problem 3

int ArraySum(int array[], int size){
	if(size>=0)
	return array[size-1] + ArraySum(array, size-1);
	else
	return 0;
}

int main(){
	int array[5] = {1,2,3,4,5};
	
	cout<<ArraySum(array, 5);
}
