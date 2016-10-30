#include<iostream>
#include<string>
using namespace std;

//Problem 1

class Date{
	private:
		int day;
		int month;
		int year;
		string name;
	public:
		Date(int day, int month, int year){
			if(day<=31 && day>=1){
				this->day = day;
			}
			else
			cout<<"Invalid Day Input";
		    
			if(month<=12 && month>=1){
		    	this->month = month;
		    switch(month){
		    	case 1:
		    		name = "January";
		    		break;
		    	case 2:
					name = "February";
					break;
				case 3:
					name = "March";
					break;
				case 4:
					name = "April";
					break;
				case 5:
					name = "May";
					break;
				case 6:
					name = "June";
					break;
				case 7:	
				    name = "July";
				    break;
				case 8:
				    name = "August";
				    break;
				case 9:
				    name = "September";
				    break;
				case 10:
				    name = "October";
				    break;
				case 11:
				    name = "November";
				    break;
				case 12:
				    name = "December";
				    break;
			}
			}
			else
			cout<<"Invalid Month Input";
			
			this->year = year;
		}
	    void setDay(int day){
	    	this->day = day;
		}
		
		void setMonth(int month){
			this->month = month;
		}
		
		void setYear(int year){
			this->year = year;
		}
		void Display1(){
			cout << to_string(day) + "/" + to_string(month) + "/" + to_string(year)<<endl;
		}
		void Display2(){
			cout << name + " " + to_string(day) + "," + to_string(year)<<endl;
		}
		void Display3(){
			cout << to_string(day) + " " + name + " " + to_string(year)<<endl;
		}
};





int main(){
	
	Date Today(25, 12, 2014);
	
	Today.Display1();
	Today.Display2();
	Today.Display3();
	
}
