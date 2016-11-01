#ifndef MILTIME_H
#define MILTIME_H

#include "Time.h"
#include<string>
#include<iostream>
using namespace std;

class MilTime : public Time{
	private:
		int milHours;
		int milSeconds ;
		string sTime;
	public:
		class BadHour
		{};
		class BadSeconds
		{};
		MilTime(){
			int milHours = 0;
			int milSeconds = 0;
			string sTime = "";
		}
		
		MilTime(int milHours, int milSeconds){
			if(milHours<=2359 && milHours>=0){
			this->milHours = milHours;
			this->milSeconds = milSeconds;
			
			if(milHours>1259)
			hour = (milHours - 1200)/100;
			else 
			hour = milHours/100;
			
			min = milHours%100;
			
			sec = milSeconds;
			
			if(milHours>=1200)
			sTime = "pm";
			else
			sTime = "am";
		}
		else
		cout<<"Invalid Number Of Hours"<<endl;
		}
		
		void setHours(int milHours){
			if(milHours<=2359 && milHours>=0){
			this->milHours = milHours;
			
			if(milHours>1200)
			hour = (milHours - 1200)/100;
			else 
			hour = milHours/100;
			
			min = milHours%100;
			
			if(milHours>1200)
			sTime = "pm";
			else
			sTime = "am";
			}
		else
		throw BadHour();
		}
		
		void setSeconds(int milSeconds){
			if(milSeconds >= 0 && milSeconds <= 59){
				this->milSeconds = milSeconds;
				sec = milSeconds;
			}
			else
			throw BadSeconds();
		}
		
		void setTime(int milHours, int milSeconds){
			if(milHours<=2359 && milHours>=0){
			this->milHours = milHours;
			
			if(milHours>1200)
			hour = (milHours - 1200)/100;
			else 
			hour = milHours/100;
			
			if(milHours>1200)
			sTime = "pm";
			else
			sTime = "am";
			}
		else
		throw BadHour();
		
		if(milSeconds>=0 && milSeconds<=59){
			this->milSeconds = milSeconds;
			min = milHours%100;
			sec = milSeconds;
		}
		else
		throw BadSeconds();
		
		
		}
		
		string getHour(){
			return to_string(milHours) + ":" + to_string(milSeconds);
		}
		
		string getStandHr(){
			if(hour<10 && min<10)
			return "0" + to_string(hour) + ":" + "0" + to_string(min) + ":" + to_string(sec) + sTime; 
			
			if(hour<10)
			return "0" + to_string(hour) + ":" + to_string(min) + ":" + to_string(sec) + sTime; 
			
			if(min<10)
			return to_string(hour) + ":" + "0" + to_string(min) + ":" + to_string(sec) + sTime; 
		}
		
};

class TimeClock: public MilTime{
	private:
		int start;
		int end;
		int diff;
	public:
		TimeClock(){
			start = 0;
			end = 0;
			diff = 0;
		}
		
		void difference(int start, int end){
			
			diff = end - start;
			
			setHours(diff);
			
		}
};


#endif
