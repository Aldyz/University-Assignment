#include<iostream>
#include<string>
using namespace std;

//Problems 1,2,3
class Employee{
	private:
		string name;
		string number;
		string date;
	public:
		
		Employee(){
			name = "";
			number = "";
			date = "";
		}
		
		Employee(string name, string number, string date){
			this->name = name;
			this->number = number;
			this->date = date;
		}
		
		void setName(string name){
			this->name = name;
		}
		
		void setNumber(string number){
			this->number = number;
		}
		
		void setDate(string date){
			this->date = date;
		}
		
		string Name(){
			return name;
		}
		
		string Number(){
			return number;
		}
		
		string Date(){
			return date;
		}
		
		
};

class ProductionWorker : public Employee{
	private:
		int shift;
		double rate;
	public:	
		ProductionWorker(){
			shift = 0;
			rate = 0;
		}
		
		ProductionWorker(int shift, double rate){
			this->shift = shift;
			this->rate = rate;
		}
		
		void Shift(){
			if(shift == 1){
				cout<<"Day Shift";
			}
			else if(shift == 2){
				cout<<"Night Shift";
			}
		}
		
		double Rate(){
			return rate;
		}
};

class ShiftSupervisor : public ProductionWorker{
	private:
		float salary;
		int bonus;
	public:
		
		ShiftSupervisor(float salary, int bonus){
			this->salary = salary;
			this->bonus = bonus;
		}
		
		void setSalary(float salary){
			this->salary = salary;
		}
		void setBonus(int bonus){
			this->bonus = bonus;
		}
		
		float getSalary(){
			return salary;
		}
		
		int getBonus(){
			return bonus;
		}
};

class TeamLeader : public ProductionWorker{
	private:
		int monthlyBonus;
		int RequiredHours;
		int Hours;
	public:
		
		TeamLeader(int monthlyBonus, int RequiredHours, int Hours){
			this->monthlyBonus = monthlyBonus;
			this->RequiredHours = RequiredHours;
			this->Hours = Hours;
		}
		
		void setMonth(int monthlyBonus){
			this->monthlyBonus = monthlyBonus;
		}
		
		void setRequired(int RequiredHours){
			this->RequiredHours = RequiredHours;
		}
		
		void setHours(int Hours){
			this->Hours = Hours;
		}
		
		int getMonth(){
			return monthlyBonus;
		}
		
		int getRequired(){
			return RequiredHours;
		}
		
		int getHours(){
			return Hours;
		}
};

int main(){
	
	ProductionWorker employee(2, 1.25);
	
	employee.setName("Aldi");
	cout<<employee.Name()<<endl;
	employee.setNumber("46345665");
	cout<<employee.Number()<<endl;
	employee.setDate("05/05/2016");
	cout<<employee.Date()<<endl;
	employee.Shift();
	cout<<endl;
	cout<<employee.Rate();
	cout<<"\n\n";
	
	ShiftSupervisor employee2(3000, 150);
	
	employee2.setName("John");
	cout<<employee2.Name()<<endl;
	employee2.setNumber("46597081");
	cout<<employee2.Number()<<endl;
	employee2.setDate("05/01/2016");
	cout<<employee2.Date()<<endl;
	cout<<"$"<<employee2.getSalary()<<endl;
	cout<<"Bonus: "<<employee2.getBonus()<<"\n\n";
	
	TeamLeader Leader(300, 30, 20);
	
	Leader.setName("Hitler");
	cout<<Leader.Name()<<endl;
	Leader.setNumber("121");
	cout<<Leader.Number()<<endl;
	employee2.setDate("08/17/1945");
	cout<<employee2.Date()<<endl;
	cout<<"$"<<Leader.getMonth()<<endl;
	cout<<"Required Hours: "<<Leader.getRequired()<<endl;
	cout<<"Hours Done: "<<Leader.getHours()<<endl;
}
