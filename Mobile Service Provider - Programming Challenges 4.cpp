#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;

//Mobile Service Provider 25,26,27

int getmonth(string);

int main(){
	
	char Package;
	float total, extra;
	int minutes, max;
	string month;
	
	cout<<setw(30)<<"Mobile Service Provider\n\n";
	cout<< "Package A: For $39.99 per month 450 minutes are provided. Additional minutes are"
        <<" $0.45 per minute.\n"
        <<"Package B: For $59.99 per month 900 minutes are provided. Additional minutes are"
        <<" $0.40 per minute.\n"
        <<"Package C: For $69.99 per month unlimited minutes provided.\n\n";
        
        cout<<"Input Package: ";
        cin>>Package;
        
        if(Package == 'A'){
        	cout<<"\nSave about $200 by Purchasing Package B with only $20 difference and extra 450 minutes"
        	    <<" to call or Package C with only \n$30 difference to call for unlimited minutes.\n\n";
		}
		else if(Package == 'B'){
			cout<<"\nSave $0.40 per minute for more than 900 minutes by purchasing Package C with only $10"
			    <<" difference \nwhich provides unlimited minutes to call.\n\n";
		}
        
        cout<<"Input Month (First Character has to be uppercase, the rest lowercase) : ";
        cin>>month;
        
		max = getmonth(month);
        
        cout<<"\nMaximum Minutes: "<<max<<endl;
        cout<<"Input Total of Minutes Used: ";
        cin>>minutes;
        
        if(minutes>max){
        	cout<<"The number of minutes is above maximum, closing program";
        	exit(0);
		}
        
        if(Package == 'A'){
        	
        	if(minutes>450){
        		
        		minutes -= 450;
        		extra = minutes*0.45;
        		total = extra + 39.99;
        		
        		cout<<"Total Amount Due: $" << total;
            }
            
			else
			cout<<"Total Amount Due: $39.99";
        	
		}
		else if(Package == 'B'){
			
			if(minutes>900){
				
				minutes -= 900;
        		extra = minutes*0.4;
        		total = extra + 59.99;
        		
        		cout<<"Total Amount Due: $" << total;
             }
        	
        	else
        	cout<<"Total Amount Due: $59.99";
			
		}
		else if(Package == 'C'){
			
			cout<<"Total Amount Due: $69.99";
			
		}
		else{
			cout<<"Invalid Input, Closing Program";                 //Validation
			exit(0);
		}
	

}

int getmonth(string word){
	
	if(word == "January" || word == "March" || word == "May" || word == "July" || word == "August" || word == "October" || word == "December")
	return 60*744;
	else if(word=="April" || word=="June" || word=="September" || word == "November")
	return 60*720;
	else if(word == "February")
	return 60*672;
	else{
		cout<<"Invalid Input, Closing Program";
		exit(0);
	}
	
	
}
