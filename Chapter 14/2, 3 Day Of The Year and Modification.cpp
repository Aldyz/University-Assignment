#include<iostream>
using namespace std;

//Problem 2, 3

class DayOfYear{
	private:
		int num;
		string sMonths[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
								"October", "November", "December"};
		int nMonths[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};						
	public:
		DayOfYear(int num){
			this->num = num;
		}
		
		void print(){
			for(int i = 0; i < 12; i++){
				if(nMonths[i+1] - num >=0)
				{   
					cout<<sMonths[i]<<" "<<num-nMonths[i]<<endl;
					break;
				}
			}
		}
		
		DayOfYear operator ++(){
			++num;
			check();
			return *this;
		}
		
		DayOfYear operator --(){
			--num;
			check();
			return *this;
		}
		
		DayOfYear operator ++(int){
			DayOfYear temp(num);
			num++;
			check();
			return temp;
		}
		
		DayOfYear operator --(int){
			DayOfYear temp(num);
			num--;
			check();
			return temp;
		}
		
		void check(){
			if(num>365){
				num = 1;
			}
			if(num<1){
				num = 365;
			}
		}
};

int main(){
	
	int today;
	cin>>today;
	
	DayOfYear Date(today);
	Date.print();
	Date++;
	Date.print();
	Date--;
	Date.print();
}
