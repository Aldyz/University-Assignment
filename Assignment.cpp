//Assignment Page 80, Starting Out C++
#include<iostream>
using namespace std;

int main(){
	
	//Problem 5
	double a = 28, b = 32, c = 37, d = 24, e = 33, sum, average;
	
	sum = a + b + c + d + e;
	average = sum/5;
	
	cout << "Average is " << average << endl << endl;
	
	//Problem 6
	
	int payAmount = 2200, payPeriods = 26, annualPay;
	
	annualPay = payAmount * payPeriods;
	cout << "Pay Amount is " << payAmount << endl;
	cout << "Pay Period is " << payPeriods << endl;
	cout << "Annual Payment is " << annualPay << endl << endl;
	
	//Problem 7
	
	double oce = 1.5;
	
	cout << "The number of millimeters higher than the current level that the oceanfs level will be in 5 years is " << oce*5 << endl;
	cout << "The number of millimeters higher than the current level that the oceanfs level will be in 7 years is " << oce*7 << endl;
	cout << "The number of millimeters higher than the current level that the oceanfs level will be in 10 years is " << oce*10 << "\n\n";
	
	//Problem 8
	
	double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, subtotal, salestax, total;
	
	subtotal = item1 + item2 + item3 + item4 + item5;
	salestax = subtotal * 0.07;
	total = subtotal + salestax;
		
		cout << "Price of item 1 = $" << item1 << endl;
		cout << "Price of item 2 = $" << item2 << endl;
		cout << "Price of item 3 = $" << item3 << endl;
		cout << "Price of item 4 = $" << item4 << endl;
		cout << "Price of item 5 = $" << item5 << endl;
		cout << "Subtotal is $" << subtotal << endl;
		cout << "Salestax is $" << salestax << endl;
		cout << "Total is $" << total << "\n\n";
		
		//Problem 9
		
		cout << "size of char " << sizeof(char) << " byte" << endl;
		cout << "size of int " << sizeof(int) << " bytes" << endl;
		cout << "size of float " << sizeof(float) << " bytes" << endl;
		cout << "size of double " << sizeof(double) << " bytes" << "\n\n";
		
		//Problem 10
		
		double miles = 375, gallon = 15, MPG;
		
		MPG = miles/gallon;
		
		cout << "The result is " << MPG << " Miles per Gallon" << "\n\n";
		
		//Problem 11
		
		double gallons = 20, town = 23.5, highway = 28.9;
		
		cout << "Distance when driven in town is " << gallon*town << " miles" << endl;
		cout << "Distance when driven in highway is " << gallon*highway << " miles" <<endl <<endl;
		
		//Problem 12
		
		double acre = 43560, acres = 391876; 
		int nacres;
		
		nacres = acres/acre;
		cout << "The number of acres is " << nacres << "\n\n";
		
		//Problem 13
		
		double profit = 1.35, sell = 14.95, price;
		
		price = profit * sell;
		
		cout << "The selling Price is $" << price << "\n\n";
		
		//Problem 14
		
		cout << "Name: Radityo Noeraldi Arief\n" << "Address: Mertilang Street Block KA 7 No 4 Tangerang Selatan, 15223\n" << "Telephone: 7457476\n" << "College Major: Computer Science\n\n";
		
		//Problem 15
		
		cout << "   *   \n" << "  ***  \n" << " ***** \n" << "*******\n\n";
		
		//Problem 16
		
		cout << "   *   \n" << "  ***  \n" << " ***** \n" << "*******\n" << " ***** \n" << "  ***  \n" << "   *   \n\n";
		
		//Problem 17
		
		double stock = 750, share = 35, comm = 0.02;
		
		cout << "The amount paid for stock alone " << stock*share << endl;
		cout << "The amount of commision " << stock*share*comm << endl;
		cout << "The total amount paid " << (stock*share*comm)+(stock*share) << "\n\n";
		
		//Problem 18
		
		double survey = 16500, drink = 0.15, citrus = 0.58;
		int citrusdrink;
		
		citrusdrink = (survey*drink)*citrus;
		
		cout <<"The approximate number of customers in the survey who purchase one or more drinks per week is ";
		cout << survey*drink << endl;
		cout <<"The approximate number of customers in the survey who prefer citrus-flavored energy drinks is ";
		cout << citrusdrink; 
		
		return 0;
}
