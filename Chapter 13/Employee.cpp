#include<iostream>
#include<string>
using namespace std;

//Problem 2

class Employee{
	private:
		string name;
		int idNumber;
		string department;
		string position;
	public:
		Employee(string name, int idNumber, string department, string position){
			this->name = name;
			this->idNumber = idNumber;
			this->department = department;
			this->position = position;
		}
		Employee(string name, int idNumber){
			this->name = name;
			this->idNumber = idNumber;
		}
		Employee(){
			this->name = "";
			this->idNumber = 0;
			this->department = "";
			this->position = "";
		}
		string getName() const{
		return name;
		}
		int getID() const{
		return idNumber;
		}
		string getDepartment() const{
		return department;
		}
		string getPosition() const{
		return position;
		}
};



int main(){
	
	Employee staff[3] = {Employee("Susan Meyers", 47899, "Accounting", "Vice President"),
	                     Employee("Mark Jones", 39119, "IT          ", "Programmer"),
						 Employee("Joy Rogers", 81774, "Manufacturing", "Engineer")};
	
	cout<<"Name\t\tID Number\t\tDepartment\t\tPosition\n\n";					 
	for(int i=0; i<3; i++){
		cout<<staff[i].getName()<<"\t"<<staff[i].getID()<<"\t\t\t"<<staff[i].getDepartment()<<"\t\t"<<staff[i].getPosition()<<endl;
	}
}
