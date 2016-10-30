#include<iostream>
#include<string>
using namespace std;

class numdays{         //Problem 4 & 5
	private:
		int hours;
		string name;
		int id;
		int maxSickDays = 0;
		int Taken = 0;
		int maxVacation = 0;
		int vacTaken = 0;
		int maxUnpaid = 0;
		int unpaidTaken = 0;
	public:
		numdays()
		{
			name = ""; 
			id = 0;
			hours = 0;
		}
		
		numdays(int hours)
		{
			this->hours = hours;
		}
		
		void setnumdays(string name, int id, int hours){
			this->hours = hours;
			this->name = name;
			this->id = id;
		}
		
		void print()
		{
			cout<<hours*0.125 << " Day";
			if(hours > 8)
			cout<<"s";
			
			cout<<endl;
		}
		
			numdays operator ++()
		{
			++hours;
			return *this;
		}
		
		numdays operator --()
		{
			--hours;
			return *this;
		}
		
		numdays operator ++(int)
		{
			numdays temp(hours);
			hours++;
			return temp;
		}
		
		numdays operator --(int)
		{
			numdays temp(hours);
			hours--;
			return temp;
		}
		
		numdays operator+(const numdays &right){
			numdays temp;
			
			temp.hours = hours + right.hours;
			return temp;
		}
		
		numdays operator-(const numdays &right){
			numdays temp;
			
			temp.hours = hours - right.hours;
			return temp;
		}
		
		void setMaxSick(int num){
			maxSickDays = num;
		}
		
		void setMaxTaken(int num){
			if(num<=240)
			maxVacation = num;
			else 
			cout<<"Invalid number, has to be below 240 hours";
		}
		
		void setMaxUnpaid(int num){
			maxUnpaid = num;
		}
		
		void setSick(int num){
			if(num<getSick())
			this->Taken = num;
			else
			cout<<"Over Limit!!!";
		}
		
		void setTaken(int num){
			if(num<getVac())
			this->vacTaken = num;
			else
			cout<<"Over Limit!!!";
		}
		
		void setUnpaid(int num){
			if(num<getUnpaid())
			this->unpaidTaken = num;
			else
			cout<<"Over Limit!!!";
		}
		
		int getSick(){
			return maxSickDays;
		}
		
		int getVac(){
			return maxVacation;
		}
		
		int getUnpaid(){
			return maxUnpaid;
		}
		
		void showData(){
			cout<<"Name: " << name<<endl;
			cout<<"ID: " << id <<endl;
			cout<<"Hours Work: " << hours<<endl;
			cout<<"Days(s) Work: "; 
			print(); 
			cout<<"Maximum Number of Days Sick: " << maxSickDays<<endl;
			cout<<"Number of Days Sick: " << Taken<<endl;
			cout<<"Maximum Number of Days of Paid Vacation: " << maxVacation<<endl;
			cout<<"Number of Days of Paid Vacation: " << vacTaken<<endl;
			cout<<"Maximum of Days of Unpaid Vacation: " << maxUnpaid<<endl;
			cout<<"Number of Days of Unpaid Vacation: " << unpaidTaken<<endl<<endl;
		}
};

int main(){
	int num, ID;
	string name; 
	
	numdays employee;
	
	cout<<"Input Name: ";
	getline(cin, name);
	cout<<"Input ID: ";
	cin>>ID;
	cout<<"Input Hours Worked: ";
	cin>>num;
	cout<<string(100, '\n');
	
	employee.setnumdays(name, ID, num);
do
{	
	employee.showData();
	cout<<"1. Increase Hour(s) Worked"<<endl;
	cout<<"2. Decrease Hour(s) Worked"<<endl;
	cout<<"3. Input Maximum Number of Days Sick"<<endl;
	cout<<"4. Input Number of Days Sick"<<endl;
	cout<<"5. Input Maximum Number of Days of Paid Vacation"<<endl;
	cout<<"6. Input Number of Days of Paid Vacation"<<endl;
	cout<<"7. Input Maximum Number of Days of Unpaid Vacation"<<endl;
	cout<<"8. Input Number of Days of Unpaid Vacation"<<endl;
	cout<<"9. Show Data"<<endl;
	cout<<"10. Exit"<<endl;
	cout<<"Input Choice: ";
	cin>>num;
	
	switch(num){
		case 1:
			employee++;
			cout<<"Hours Added To ";
			employee.print();
			break;
		case 2:
			employee--;
			cout<<"Hours Decreased To ";
			employee.print();
			break;
		case 3:
			cout<<"Input: ";
			cin>>num;
			employee.setMaxSick(num);
			break;
		case 4:
			cout<<"Input: ";
			cin>>num;
			employee.setSick(num);
			break;
		case 5:
			cout<<"Input: ";
			cin>>num;
			employee.setMaxTaken(num);
			break;
		case 6:
			cout<<"Input: ";
			cin>>num;
			employee.setTaken(num);
			break;
		case 7:
			cout<<"Input: ";
			cin>>num;
			employee.setMaxUnpaid(num);
			break;
		case 8:
			cout<<"Input: ";
			cin>>num;
			employee.setUnpaid(num);
			break;
		case 9:
			exit(0);
	}
	cout<<"\nPress Enter To Continue";
cin.ignore();
cin.get();
cout<<string(100, '\n');

}while(num != 9);

	return 0;
}
