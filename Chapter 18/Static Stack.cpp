#include<iostream>
using namespace std;

//problem 1
template<typename T>
class stack{
	private:
		T *stackArray;
		int stackSize;
		int top;
	public:
		stack(int size)
		{
			stackArray = new T [size];
			stackSize = size;
			top =  -1;
		}
		~stack(){
			delete [] stackArray;
		}
		void push(int num)
		{
			if(Full()){
				cout<<"Stack is Full";
			}
			else{
				top++;
				stackArray[top] = num;
			}
		}
		void pop(int &num){
			if(Empty()){
				cout<<"Stack is Empty";
			}
			else{
				num = stackArray[top];
				top--;
			}
		}
		bool Full(){
			if(top == stackSize - 1){
				return true;
			}
			else
			return false;
		}
		bool Empty(){
			if(top == -1){
				return true;
			}
			else
			return false;
		}
};

int main(){
	
	stack<int> myStack(5);
	
	for(int i = 1; i <= 5; i++)
	myStack.push(i);
	
	int num;
	myStack.pop(num);
	cout<<num;
}
