#include<iostream>
using namespace std;

struct rainfall{
	int total;
	int high;
	int low;
	int average;	
};

enum year { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

int main(){
	
	rainfall month[12];
	static int totalyear;
	static int highyear;
	static int lowyear;
	static int averageyear;
	year Month;
	
	for(Month=JANUARY; Month<=DECEMBER; Month = static_cast<year>(Month+1)){
		cout<<"Month "<<Month+1<<endl;
		cout<<"Input Total Rainfall: ";
		cin>>month[Month].total;
		totalyear += month[Month].total;
		cout<<"Input highest temperature: ";
		cin>>month[Month].high;
		if(month[Month].high>=140){
			cout<<"Invalid Input";
			exit(0);
		}
		cout<<"Input lowest temperature: ";
		cin>>month[Month].low;
		if(month[Month].low<=-100){
			cout<<"Invalid Input";
			exit(0);
		}
		month[Month].average = (month[Month].high+month[Month].low)/2;
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<<"Total rainfall for the year: "<<totalyear<<endl;
	cout<<"Average Monthly Rainfall: "<<totalyear/12<<endl;
	
		highyear = month[0].high;
		lowyear = month[0].low;
		for(Month=JANUARY; Month<=DECEMBER; Month = static_cast<year>(Month+1)){
			if(highyear < month[Month].high)
			highyear = month[Month].high;
			if(lowyear > month[Month].low)
			lowyear = month[Month].low;
		}
	
	
	cout<<"Highest Temperature of the year: "<<highyear<<endl;
	cout<<"Lowest Temperature of the year: "<<lowyear<<endl;
	
}
