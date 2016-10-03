#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;

int Birth(int, float);
int Death(int, float);
float NewPopulation(int, int, int);
void Display(int, int);

int main(){

   HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
   ofstream outputfile;
   float birthrate, deathrate;
   int oldpopulation, year;
   int BirthNumber, DeathNumber, NewNumber;
   
   outputfile.open("Population.txt");
   
   SetConsoleTextAttribute (screen, 9);
   cout<<"  POPULATION  "<<"\n\n";
   outputfile<< " POPULATION " << "\n\n";
   SetConsoleTextAttribute (screen, 7);
   
   	cout << "Enter Starting Population : ";
   	cin >> oldpopulation;
   	while(oldpopulation < 2){
   		cout<<"Invalid Number of Population"<<endl;
   		cin >> oldpopulation;
	   }
   	cout << "Enter Annual Birthrate : ";
   	cin >> birthrate;
   	while(birthrate<0){
   		cout<<"Invalid Birth Rate"<<endl;
   		cin>>birthrate;
	   }
   	cout << "Enter Annual Deathrate : ";
   	cin >> deathrate;
   	while(deathrate<0){
   		cout<<"Invalid Death Rate"<<endl;
   		cin>>deathrate;
	   }
   	cout << "Enter number of year(s) : ";
   	cin >> year;
   	while(year<1){
   		cout<<"Invalid number of year"<<endl;
   		cin>>year;
	   }
	   
	   outputfile<<"The Starting Population is " << oldpopulation<<endl;
	   outputfile<<"The Annual Birthrate is "<< birthrate<<endl;
	   outputfile<<"The Annual Deathrate is "<< deathrate<<endl;
   	
   	for(int i=1; i<=year; i++){
   	BirthNumber = Birth(oldpopulation, birthrate);
   	DeathNumber = Death(oldpopulation, deathrate);
   	NewNumber = NewPopulation(oldpopulation, BirthNumber, DeathNumber);
   	oldpopulation = NewNumber;
}
    cout<<endl;
    
	Display(NewNumber, year); 
	outputfile<<"\n"<<NewNumber<<" is the new population size after "<< year << " year(s)";
	
	outputfile.close();
 
     return 0;
}

void Display(int Number, int time){
	cout<<Number<<" is the new population size after "<< time << " year(s)";
}

int Birth(int population1, float bRate){
	int totalbirth;
	
	totalbirth = population1 * bRate; 
}

int Death(int population2, float dRate){
	int totaldeath;
	
	totaldeath = population2 * dRate;
}

float NewPopulation(int P, int BP, int DP){
	int NewTotal;
	
	NewTotal = P + BP - DP;
	
	return NewTotal;
} 

