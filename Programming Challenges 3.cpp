#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	//Problem 1
	int gallons, miles;
	
	cout << "Input Gallons and Miles in order\n";
	cin >> gallons >> miles;
	
	cout << static_cast<float>(miles)/gallons << " miles per gallon.\n";
	
	//Problem 2
	
	int A, B, C;
	
	cout << "Class A: ";
	cin >> A;
	cout << "Class B: ";
	cin>> B;
	cout << "Class C: ";
	cin >> C;
	
	cout << setprecision(2) << fixed << showpoint;
	cout << "$ " << A+B+C << endl;
	
	//Problem 3
	
	float score[5], total;
	
	for(int i=1; i<=5; i++){
		cout << "Input Score " << i << " : ";
		cin >> score[i-1];
		total += score[i-1];
	}
	cout << fixed << setprecision(1);
	cout << total/5<<endl;
	
	//Problem 4
	 float rain[3], raindrop = 0;
	 string month[3];
	 
	 for(int j = 0; j <3; j++){
	 cout<<"Input Month "<< j+1 << " ";
	 cin>>month[j];
	 cout<<"Input Rain: ";
	 cin >>rain[j];
	 raindrop += rain[j];}
	 cout<<setprecision(2);
	 cout<<"The average rainfall for " << month[0] << " " << month[1] << " " << month[2] << " is " << raindrop/3 << " inches." << endl;
	  
	 //Problem 5
	 
	 int male, female, sum;
	 
	 cout<<"Input number of male: ";
	 cin >> male;
	 cout<<"Input number of female: ";
	 cin >> female;
	 
	 sum = male + female;
	 
	 cout<<static_cast<float>(male)/sum<<endl;
	 cout<<static_cast<float>(female)/sum<<endl;
	 
	 //Problem 24
	 
	 string data[7] = {"name", "city", "age", "college", "profession", "animal", "pet"};
	 string input[7];
	 
	 for(int k=0; k<7; k++){
	 	cout << "Input " << data[k] << " ";
	 	cin>>input[k];
	 }
	 
	cout<< "There once was a person named " << input[0] << " who lived in " << input[1] <<". At the age of " <<
input[2] << ", " << input[0] << " went to college at " << input[3] <<". "<< input[0] << " graduated "<<endl <<" and went to work " <<
"as a " << input[4] <<". Then, "<< input[0] << " adopted a(n) "<< input[5] << " named " << input[6] << ". They "<<
"both lived happily ever after!";

}
