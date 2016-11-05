#include<iostream>
using namespace std;

//problem 2

template<typename T>
class stack{
	private:
		struct node{
			T value;
			node *next;	
		};
		node *top;
	public:
		stack(){
			top = nullptr;
		}
		~stack(){
			node *nodePtr, *nextNode;
			
			nodePtr = top;
				
				while(nodePtr != nullptr){
					nextNode = nodePtr -> next;
					delete nodePtr;
					nodePtr = nextNode;
				}	
		}
		void push(T num){
			node *newNode;
			
			newNode = new node;
			newNode->value = num;
			
			if(empty()){
				top = newNode;
				newNode->next = nullptr;
			}
			else{
				newNode->next = top;
				top = newNode;
			}
		}
		
		void pop(T &num){
			node *item = nullptr;
			
			if(empty()){
				cout<<"The Stack is Empty";
			}
			else{
				num = top->value;
				item = top->next;
				delete top;
				top = item;
			}
		}
		bool empty(){
			if(!top)
			return true;
			else
			return false;
		}
};

int main(){
	
	stack<int> myStack;
	
	for(int i = 1; i<=5; i++)
	myStack.push(i);
	
	int num;
	myStack.pop(num);
	
	cout<<num;
	
}
