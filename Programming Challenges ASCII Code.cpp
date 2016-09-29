#include<iostream>
using namespace std;

int main(){
	
	unsigned char a=32;
	cout<<"NUL SOH STX ETX EOT ENQ ACK BEL BS TAB LF VT FF CR SO SI" << endl;
	cout<<"DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US" << endl;
	cout<< "Space ";
    while(a<=127){
    	a++;
    	if(a%16==0){
    		cout << endl;
    		}
    	cout<<a;
	}
		
	
	return 0;
}
