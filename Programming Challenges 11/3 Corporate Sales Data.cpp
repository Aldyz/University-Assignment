#include<iostream>
#include<cstring>
#include<string>
using namespace std;

struct company{
 	string division[4] = {"North", "West", "East", "South"};
 	int quarter[4];
 	int total = 0;
 	int average = 0;
};

int main(){
	
	company section[4];
	
	for(int i=0; i<4; i++){
		int counter = 0;
		cout<<section[i].division[i]<<endl;
		cout<<"Input first-quarter sales: ";
		cin>> section[i].quarter[counter];
		cout<<"Input second-quarter sales: ";
		cin>> section[i].quarter[counter+1];
		cout<<"Input third-quarter sales: ";
		cin>> section[i].quarter[counter+2];
		cout<<"Input fourth-quarter sales: ";
		cin>> section[i].quarter[counter+3];
		}
		
		cout<<endl;
		
	for(int j=0; j<4; j++){
		for(int h=0; h<4; h++){
		section[j].total +=  section[j].quarter[h];
	}
	cout<<"Total sales of "<<section[j].division[j]<<": "<<section[j].total<<endl;
	}
	
	cout<<endl;
	
	for(int k=0; k<4; k++){
		cout<<"Average Quarterly Sales of "<<section[k].division[k]<<": "<<section[k].total/4<<endl;
	}
	
	
}
