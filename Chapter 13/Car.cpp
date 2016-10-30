#include<iostream>
#include<string>
using namespace std;

//Problem 3

class Car{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		Car(int year, string create){
			yearModel = year;
			make = create;
			speed = 0;
		}
		int getYear(){
			return yearModel;
		}
		string getMake(){
			return make;
		}
		int getSpeed(){
			return speed;
		}
		void accelerate(){
			speed += 5;
		}
		void brake(){
			speed -= 5;
		}
};


int main(){
 
 	Car MyCar(2012, "Toyota");
 	
 	MyCar.accelerate();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.accelerate();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.accelerate();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.accelerate();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.accelerate();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.brake();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.brake();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.brake();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.brake();
 	cout<<MyCar.getSpeed()<<endl;
 	MyCar.brake();
 	cout<<MyCar.getSpeed()<<endl;
 	
 	return 0;
}
