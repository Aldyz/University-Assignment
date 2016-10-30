#include<iostream>
#include<string>
using namespace std;

//Problem 4

class PersonalInformation{
	private:
		string name;
		string address;
		int age;
		string phone;
	public:
		void setName(){
			string name;
			cout<<"Name: ";
			getline(cin, name);
		   this->name = name;
		}
		void setAddress(){
			string address;
			cout<<"Address: ";
			getline(cin, address);
			this->address = address;
		}
		void setAge(){
			int age;
			cout<<"Age: ";
			cin>>age;
			this->age = age;
		}
		void setPhone(){
			string phone;
			cout<<"Phone Number: ";
			cin.ignore();
			getline(cin, phone); 
			this->phone = phone;
		}
		string getName(){
			return name;
		}
		string getAddress(){
			return address;
		}
		int getAge(){
			return age;
		}
		string getPhone(){
			return phone;
		}
};


int main(){
	PersonalInformation You, Friend, Family;
	
	cout<<"Input your Personal Information"<<endl;
	You.setName();
	You.setAddress();
	You.setAge();
	You.setPhone();
	
	cout<<"Input your Friend's Personal Information"<<endl;
	Friend.setName();
	Friend.setAddress();
	Friend.setAge();
	Friend.setPhone();
	
	cout<<"Input your family member's Personal Information"<<endl;
	Family.setName();
	Family.setAddress();
	Family.setAge();
	Family.setPhone();
	
	cout<<"\nName: "<<You.getName()<<endl;
	cout<<"Address: "<<You.getAddress()<<endl;
	cout<<"Age: "<<You.getAge()<<endl;
	cout<<"Phone Number: "<<You.getPhone()<<endl;
	
	cout<<"\nName: "<<Friend.getName()<<endl;
	cout<<"Address: "<<Friend.getAddress()<<endl;
	cout<<"Age: "<<Friend.getAge()<<endl;
	cout<<"Phone Number: "<<Friend.getPhone()<<endl;
	
	cout<<"\nName: "<<Friend.getName()<<endl;
	cout<<"Address: "<<Friend.getAddress()<<endl;
	cout<<"Age: "<<Friend.getAge()<<endl;
	cout<<"Phone Number: "<<Friend.getPhone()<<endl;
}
