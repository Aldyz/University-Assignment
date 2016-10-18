#include<iostream>
#include<string>
using namespace std;

//Problem 1, 2

struct MovieData{
	string MovieTitle;
	string Director;
	int Year;
	int RunMin;
	float productioncost;
	float firstrevenue;
};

void Display(MovieData);

int main(){
	
	MovieData Film[2];
	
	for(int i = 0; i<2; i++){
		cout<<"Title: ";
		getline(cin, Film[i].MovieTitle);
		cout<<"Director: ";
		getline(cin, Film[i].Director);
		cout<<"Year: ";
		cin>>Film[i].Year;
		cout<<"Running Time: ";
		cin>>Film[i].RunMin;
		cout<<"Movie Production Costs: ";
		cin>>Film[i].productioncost;
		cout<<"First Year Revenue: ";
		cin>>Film[i].firstrevenue;
		cin.ignore();
	}
	
	Display(Film[1]);
	Display(Film[2]);
}

void Display(MovieData M){
	
		cout<<"Title: ";
		cout<<M.MovieTitle;
		cout<<"Director: ";
		cout<<M.Director;
		cout<<"Year: ";
		cout<<M.Year;
		cout<<"Running Time: ";
		cout<<M.RunMin;
		cout<<" minutes"<<endl;
		cout<<"Movie Production Costs: ";
		cout<<M.productioncost;
		cout<<"First Year Revenue: ";
		cout<<M.firstrevenue;
}
