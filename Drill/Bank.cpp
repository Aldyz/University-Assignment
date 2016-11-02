#include<iostream>
using namespace std;

class Account{
	private:
		double balance;
	public:
		Account(){
			balance = 0;
		}
		Account(double balance){
			this->balance = balance;
		}
		double getBalance(){
			return balance;
		}
		bool deposit(double amt){
			if(amt<0){
				return false;
			}
			else{
				balance += amt;
				return true;
			}
			
		}
		bool withdraw(double amt){
			if(amt>balance){
				return false;
			}
			else{
				balance -= amt;
				return true;
			}
		}
};

class Customer{
	private:
		string firstName;
		string lastName;
		Account account;
	public:
		Customer()
		{
			firstName = "";
			lastName = "";
		}
		Customer(string f, string l){
			firstName = f;
			lastName = l;
		}
		string getFirstName(){
			return firstName;
		}
		void setName(string f, string l){
			firstName = f;
			lastName = l;
		}
		string getLastName(){
			return lastName;
		}
		Account getAccount(){
			return account;
		}
		void setAccount(Account acct){
			account = acct;
		}
};

class Bank{
	private:
		Customer *customers;
		int numberOfCustomers = 0;
		string BankName;
	public:
		Bank(string bName){
			BankName = bName;
		}
		void addCustomer(string f, string l){
			if(numberOfCustomers == 0){
			customers = new Customer [1];
			numberOfCustomers += 1;
			customers[numberOfCustomers-1].setName(f, l);
			}
			else
			{
				numberOfCustomers += 1;
				customers[numberOfCustomers-1].getFirstName() = f;
				customers[numberOfCustomers-1].getLastName() = l;
			}
		}
		int getNumCustomers(){
			return numberOfCustomers;
		}
		Customer getCustomer(int index){
			return customers[index];
		}
};

int main(){
	Bank Aldi("Supreme");
	Aldi.addCustomer("Tio", "Arief");
	Customer Some1 = Aldi.getCustomer(0);
	cout<<Some1.getFirstName();
}
