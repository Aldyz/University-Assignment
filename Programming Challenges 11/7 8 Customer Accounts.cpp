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
	string Address;
	string location;
	int telephone;
	int balance;
	string lastpayment;
};

account create();

int main(){
	
	account New[10];
	char choice, decision;
	int j, counter;
	string search;
 do{
	cout<<" CUSTOMER ACCOUNTS "<<endl<<endl;
	cout<<"1. Create/Edit Account"<<endl;
	cout<<"2. Search Account"<<endl;
	cout<<"Input choice: ";
	cin>>decision;
	
	if(decision=='1'){
		cout<<"\nInput Account Slot from 1-10: ";
		cin>>j;
		
		cout<<"\nAccount"<<" "<<j<<endl<<endl;
		New[j-1] = create();	
		}
	else if(decision == '2'){
		cout<<"\nSearch Account Name: ";
		cin.ignore();
		getline(cin, search);
		
		for(int i = 0; i<10; i++){
			if(search == New[i].name){
				
				cout<<"\nAccount"<<i+1<<endl<<endl;
				cout<<"Name: "<<New[i].name<<endl;
	            cout<<"Address1: "<<New[i].Address<<endl;
				cout<<"Address2: "<<New[i].location<<endl;
				cout<<"Telephone: "<<New[i].telephone<<endl;
				cout<<"Balance: "<<New[i].balance<<endl;
				cout<<"Date of Last Payment: "<<New[i].lastpayment<<endl<<endl;
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
			cout<<"Input Address: ";
			getline(cin, make.Address);
			if(make.Address == "\0"){
				cout<<"Error";
				exit(0);
			}
			cout<<"Input city, state and ZIP: ";
			getline(cin, make.location);
			if(make.location == "\0"){
				cout<<"Error";
				exit(0);
			}
			do{
			cout<<"Input Telephone Number: ";
			cin>>make.telephone,
			cout<<"Input Account Balance: ";
			cin>>make.balance;
			if(make.balance < 0 || make.telephone < 0 )
			cout<<"Invalid Input, Try Again"<<endl;
			}while(make.balance < 0 || make.telephone < 0 );
			cout<<"Input date last payment: ";
			cin.ignore();
			getline(cin, make.lastpayment);
		    
		    return make;
		
}


