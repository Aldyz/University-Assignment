#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct team{
	string name;
	int number;
	int points;
};

int main(){
	
	team player[12];
	int total, highest = 0;
	
	for(int i=0;i<12;i++){
	
		cout<<"Player "<<i+1<<endl;
		cout<<"Input Player Name: ";
		cin.ignore();
		getline(cin, player[i].name);
		cout<<"Input Player Number: ";
		cin>>player[i].number;
		cout<<"Input number of points: ";
	
		do{
		cin>>player[i].points;              //Validation
		if(player[i].points<0)
		cout<<"Invalid Input, Try Again: ";
	    }while(player[i].points<0);
	   
	    if(highest<player[i].points)
	    highest = player[i].points;
	    
		total += player[i].points;
		cout<<endl;
	}
	
	cout<<"Player"<<"\t\t";
	cout<<"Number"<<"\t\t";
	cout<<"Points"<<"\t\t"<<endl;
	
	for(int j=0; j<12; j++){
		cout<<player[j].name<<"\t\t";
		cout<<player[j].number<<"\t\t";
		cout<<player[j].points<<"\t\t";
		cout<<endl;
	}
	
	cout<<"Total points: "<<total<<endl;
	cout<<"Highest Point: "<<highest<<endl;
	
	
	
}
