#include "MilTime.h"
using namespace std; 

//Problem 4,5

 int main()
 {
 	MilTime now(1345, 50);
 	
 	cout<<now.getStandHr()<<endl;
 	cout<<now.getHour()<<"\n\n";
 	
 	TimeClock Diff;
 	Diff.difference(900, 1300);
 	cout<<Diff.getStandHr()<<endl;
 	cout<<Diff.getHour();
 }
