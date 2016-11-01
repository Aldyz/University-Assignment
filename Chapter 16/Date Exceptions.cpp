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
		Date(){
			day = 1;
			month = 1;
			year = 1900;
		}
		class wrongDay
		{};
		class wrongMonth
		{};
		
		void setDate(int day, int month, int year){
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
	    	if(day>=1 && day<=31)
	    	this->day = day;
	    	else 
	    	throw wrongDay();
		}
		
		void setMonth(int month){
			if(month>=1 && month<=12)
			this->month = month;
			else 
			throw wrongMonth();
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
	
	int day, month, year;
	
	Date Today;
	
	try
	{
		cout<<"Input Day: ";
		cin>>day;
		cout<<"Input Month: ";
		cin>>month;
		cout<<"Input Year: ";
		cin>>year;
		Today.setDay(day);
		Today.setMonth(month);
	}
	catch(Date::wrongDay){
		cout<<"Invalid Day Input";
		exit(0);
	}
	catch(Date::wrongMonth){
		cout<<"Invalid Month Input";
		exit(0);
	}
	
	Today.setDate(day, month, year);
	Today.Display1();
	Today.Display2();
	Today.Display3();
	
}
