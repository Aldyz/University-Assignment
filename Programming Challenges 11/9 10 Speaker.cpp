/*Pak Bagus I know this can be better, but I will upload this 
for now, im not lazy, i just dont want to stress myself 
and im not smart either, i just have a head 
start because i asked the seniors about the 1st semester material
and studied during FEP.*/
#include<iostream>
#include<string>        
#include<cstring>
#include<cstdlib>
#include<fstream>
using namespace std;

struct account{
	string name;
	int telephone;
	string topic;
	int fee;
};

account create();

int main(){
	
	account New[10];
	char choice, decision;
	int j, counter;
	string search;
 do{
	cout<<" SPEAKERS BUREAUE "<<endl<<endl;
	cout<<"1. Create/Edit Speaker"<<endl;
	cout<<"2. Search Speaker"<<endl;
	cout<<"Input choice: ";
	cin>>decision;
	
	if(decision=='1'){
		cout<<"\nInput Speaker Slot from 1-10: ";
		cin>>j;
		
		cout<<"\nSpeaker"<<" "<<j<<endl<<endl;
		New[j-1] = create();	
		}
	else if(decision == '2'){
		cout<<"\nSearch Speaker's' Name: ";
		cin.ignore();
		getline(cin, search);
		
		for(int i = 0; i<10; i++){
			if(search == New[i].name){
				
				cout<<"\nSpeaker"<<i+1<<endl<<endl;
				cout<<"Name: "<<New[i].name<<endl;
	            cout<<"Telephone: "<<New[i].telephone<<endl;
				cout<<"Topic: "<<New[i].topic<<endl;
				cout<<"Fee: "<<New[i].fee<<endl<<endl;
			}
			else if(counter==9){
				cout<<"\nCannot Find Input\n";
				break;
			}
			else
			counter++;
		}
	}
	
	cout<<"\nGo back to menu 1 for yes/ 0 for exit: ";
		cin>>choice;
		if(choice == '1'){
			system("CLS");
		}
		else if(choice == '2'){
			exit(0);
		}
		
}while(choice != '0');
		
	}


account create(){
	account make;
	        
	        cin.ignore();
			cout<<"Input Name: ";
			getline(cin, make.name);
			if(make.name == "\0"){
				cout<<"Error";
				exit(0);
			}
			cout<<"Input Topic: ";
			getline(cin, make.topic);
			if(make.topic == "\0"){
				cout<<"Error";
				exit(0);
			}
			do{
			cout<<"Input Telephone Number: ";
			cin>>make.telephone,
			cout<<"Input Account Balance: ";
			cin>>make.fee;
			if(make.fee < 0 || make.telephone < 0 )
			cout<<"Invalid Input, Try Again"<<endl;
			}while(make.fee < 0 || make.telephone < 0 );
			cin.ignore();
		    
		    return make;
		
}


