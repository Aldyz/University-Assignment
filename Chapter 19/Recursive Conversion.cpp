#include<iostream>
using namespace std;

//problem2
void sign(int n)
{
	while (n > 0)
	{
		cout << "No Parking\n";
		n--;
	}
}

int main(){
	
	sign(4);
}
