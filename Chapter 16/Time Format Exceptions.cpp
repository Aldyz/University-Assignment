#include "MilTime.h"
using namespace std; 

//Problem 4,5

 int main()
 {	int hour, second;
 	MilTime now(hour, second);
 	
 	try{
	cout<<"Input Hours: ";
	cin>>hour;
	cout<<"Input Seconds: ";
	cin>>second; 
 	now.setHours(hour);
 	now.setSeconds(second);
 	}
	 catch(MilTime::BadHour){
	 	cout<<"Invalid Input of Hour";
	 	exit(0);
	 }	
	 catch(MilTime::BadSeconds){
	 	cout<<"Invalid Input of Second";
	 	exit(0);
	 }
 	
 	cout<<now.getStandHr()<<endl;
 	cout<<now.getHour()<<"\n\n";
 }
