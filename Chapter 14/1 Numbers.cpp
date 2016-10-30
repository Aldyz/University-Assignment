#include<iostream>
using namespace std;

//Problem 1

class Number
	{
	private:
		int nTens[8] = { 20, 30, 40, 50, 60, 70, 80, 90 };
		int nHundreds[9] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
		int nThousands[9] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000};
		string sLessThanTwenty[20] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
		string sTens[8] = { "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
		string sHundred = "Hundred";
		string sThousand = "Thousand";
	public:
		Number(int num)
		{
			if(num==0)
			cout<<sLessThanTwenty[0];
			
			if(num<10000 && num >=1000)
			{
				for(int i = 0; i < 9; i++){
					if(num - nThousands[i] <1000 && num - nThousands[i] >= 0){
						cout<< sLessThanTwenty[i+1] << " " << sThousand;  
						num = num - nThousands[i];
					}
				}
			}
			
			if(num<1000 && num>=100)
			{
				for(int i = 0; i<9; i++){
					if(num - nHundreds[i] <100 && num - nHundreds[i] >= 0){
						cout<< " " << sLessThanTwenty[i+1] << " " << sHundred;
						num = num - nHundreds[i];
					}
				}
			}
			
			if(num<100 && num>=20)
			{
				for(int i = 0; i<8; i++){
					if(num - nTens[i] <10 && num - nTens[i] >=0){
						cout<< " " << sTens[i];
						num = num - nTens[i];
					}
				}
			}
			
			if(num<20 && num>=0)
			{
				if(num!=0)
				cout<<" "<<sLessThanTwenty[num];
			}
			
		}
		
	};
	
int main(){
	
	int numb;
	cin>>numb;
	
	Number ThisOne(numb);
}
