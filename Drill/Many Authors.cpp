#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Author{
	protected:
		string name;
		string email; 
		char gender;
	public:
		Author()
		{}
		Author(string name, string email, char gender){
			this->name = name;
			this->email = email;
			if(gender == 'm' || gender == 'f')
			this->gender = gender;
			else
			{
				cout<<"Invalid Input of Gender";
				exit(0);
			}
		}
		
		string getName(){
			return name;
		}
		
		string getEmail(){
			return email;
		}
		void setEmail(string email){
			this->email = email;
		}
		char getGender(){
			return gender;
		}
		string toString(){
			return "Name: " + name +"\n"+ "Email: " + email + "\n" + "Gender: " + gender;
		}
};

class Book{
	protected:
		string name;
		Author *author;
		double price;
		int qty = 0;
		int size = 1;
	public:
		Book(string name, Author author[], double price){
			this->name = name;
			this->author = new Author[2];
			for(int i = 0; i < 2; i++)
			this->author[i] = author[i];
			this->price = price;
		}	
		Book(string name, Author author[], double price, int qty){
			this->name = name;
			this->author = new Author [2]; 
			for(int i = 0; i < 2; i++)
			this->author[i] = author[i];
			this->price = price;
			this->qty = qty;
		}
		string getName(){
			return name;
		}
		Author getAuthor(){
			return author[0];
		}
		double getPrice(){
			return price;
		}
		void setPrice(double price){
			this->price = price;
		}
		int getQty(){
			return qty;
		}
		void setQty(int qty){
			this->qty = qty;
		}
		string toString(){
			return "\n" + name + " \n" + author[0].toString() + "\n" + author[1].toString() + "\n" +  "$" + to_string(price)+ "\n" + "Quantity: " + to_string(qty); 
		}
};

int main(){
	Author Person[2] = {Author("Aldi Arief", "supremealdi@gmail.com", 'm'),
						Author("Tio Arief", "tioarief@yahoo.com", 'm')};
	cout<<Person[0].toString()<<endl;
	
	Book myBook("The Equation of Life", Person, 69.99, 100);
	cout<<myBook.toString();
}
