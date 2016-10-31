#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

//Problem 7,8

class PersonData{
	private:
		string lastname;
		string firstname;
		string Address;
		string city;
		string state;
		string zip;
		string phone;
	public:
		PersonData(){
		string lastname = "";
		string firstname = "";
		string Address 	= "";
		string city = "";
		string state = "";
		string zip = "";
		string phone = "";
		}
		
		void setData(string l, string f,string a, string c, string s, string z, string p){
		lastname = l;
		firstname = f;
		Address = a;
		city = c;
		state = s;
		zip = z;
		phone = p;
		}
		
		string getData(){
			return "Last Name: " + lastname + "\n" + "First Name: " + firstname + "\n"
					+  "Address: " + Address + "\n" + "City: "+city+"\n"+"State: "+state+"\n"
					+ "ZIP: " + zip + "\n" +"Phone: "+ phone;
		}
};

class CustomerData : public PersonData{
	private:
		int  customerNumber;
		bool mailingList;
	public:
		void setCustomerNumber(int customerNumber){
			this->customerNumber = customerNumber;
		}
		
		void setMailingList(bool mailingList){
			this->mailingList = mailingList;
		}
		
		int getCustomer(){
			return customerNumber;
		}
		
		bool getMail(){
			return mailingList;
		}
};

class PreferredCustomer: public CustomerData{
	private:
		double PurchaseAmount;
		double DiscountLevel;
	public:
		PreferredCustomer(){
			PurchaseAmount = 0;
			DiscountLevel = 0;
		}
		
		void setPurchase(double PurchaseAmount){
			if(PurchaseAmount >= 0)
			this->PurchaseAmount = PurchaseAmount;
			else
			cout<<"Invalid Input";
			
			if(PurchaseAmount>=500)
				DiscountLevel = 0.05;
			
			if(PurchaseAmount>=1000)
				DiscountLevel = 0.06;
				
			if(PurchaseAmount>=1500)
				DiscountLevel = 0.07;
				
			if(PurchaseAmount>=2000)
				DiscountLevel = 0.10;		
		}
		
		double getPurchase(){
			return PurchaseAmount;
		}
		
		double getDisc(){
			return DiscountLevel;
		}
};

int main(){
	PreferredCustomer obj;
	bool choice;
	
	obj.setData("Arief", "Aldi",  "House", "Jakarta", "DKI", "5221", "085946578181");
	cout<<obj.getData()<<endl;
	cout<<"Do you want to be part of the Mailing List: (Type 1 for yes, Type 0 for no)"<<endl;
	cin>>choice;
	obj.setMailingList(choice);
	if(obj.getMail())
	cout<<"You're in the Mailing List";
	else
	cout<<"You're not in the Mailing List";
	cout<<endl;
	
	unsigned start = time(0);
	srand(start);
	int number = rand();
	double amount;
	
	obj.setCustomerNumber(number);
	cout<<"Customer Number: ";
	cout<<obj.getCustomer()<<endl;
	cout<<"Input Purchase Amount: ";
	cin>>amount;
	
	obj.setPurchase(amount);
	cout<<"Discount Level: "<<obj.getDisc()*100<<"%";
}
