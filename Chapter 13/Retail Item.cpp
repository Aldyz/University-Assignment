#include<iostream>
#include<string>
using namespace std;

//Problem 5

class RetailItem{
	private:
		string Description;
		int Units;
		float Price;
	public:
		void setDesc(string Description){
			this->Description = Description;
		}
		
		void setUnits(int Units){
			this->Units = Units;
		}
		
		void setPrice(float Price){
			this->Price = Price;
		}
		
		string getDesc(){
			return Description;
		}
		
		int getUnits(){
			return Units;
		}
		
		float getPrice(){
			return Price;
		}
};

int main(){
	
	RetailItem item[3];
	
	item[0].setDesc("Jacket");
	item[1].setDesc("Designer Jeans");
	item[2].setDesc("Shirt");
	
	item[0].setUnits(12);
	item[1].setUnits(40);
	item[2].setUnits(20);
	
	item[0].setPrice(59.95);
	item[1].setPrice(34.95);
	item[2].setPrice(24.95);
	
	for(int i = 0; i<3; i++){
		cout<<"Item "<<i+1<<endl;
		cout<<"Description: "<<item[i].getDesc()<<endl;
		cout<<"Units on Hand: "<<item[i].getUnits()<<endl;
		cout<<"Price: "<<item[i].getPrice()<<endl;
	}
}
