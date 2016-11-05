#include<iostream>
using namespace std;

//problem 1,2,4,5,7

struct Node{
			int value;
			Node *Next;
		};

class LinkedList{
	private:
		Node *head;
		int length;
	public:
		LinkedList(){
			head = nullptr;
			length = 0;
		}
		
		~LinkedList(){
 			Node *nodePtr; 
			Node *nextNode; 

			nodePtr = head;

 	while (nodePtr != nullptr)
 	{
 	nextNode = nodePtr->Next;

 	delete nodePtr;
	
	nodePtr = nextNode;
	}
 }	
 
		int search(int num){
			Node *nodePtr;
			
			int position = 0;
			nodePtr = head;
			
			while(nodePtr != nullptr && nodePtr->value!= num)
			{
				nodePtr = nodePtr->Next;
				position++;
			}
			
			return position;
		} 
 
 		void reverse()
		{
 		if(head == nullptr) 
		return;

    		Node *prev = nullptr, *current = nullptr, *next = nullptr;
    		current = head;
    		
			while(current != nullptr)
			{
        		next = current->Next;
        		current->Next = prev;
        		prev = current;
        		current = next;
    		}
    		head = prev;
		}
		void appendNode(int num)
		{
			Node *newNode;
			Node *nodePtr;
			length += 1;
			
			newNode = new Node;
			newNode->value = num;
			newNode->Next = nullptr;
			
			if(!head){
				head = newNode;
			}
			else{
				nodePtr = head;
				
				while(nodePtr->Next)
				nodePtr = nodePtr->Next;
				
				nodePtr->Next = newNode;
			}
		}
		void insertNode(int num)
		{
			Node *newNode;
			Node *nodePtr;
			Node *previousNode = nullptr;
			
			newNode = new Node;
			newNode->value = num;
			
			if(!head){
				head = newNode;
				newNode->Next = nullptr;
			}
			else
			{
				nodePtr = head;
				
				previousNode = nullptr;
				
				while (nodePtr != nullptr && nodePtr->value < num)
				{
 					previousNode = nodePtr;
 					nodePtr = nodePtr->Next;
 				}
 				if (previousNode == nullptr)
 				{
 					head = newNode;
 					newNode->Next = nodePtr;
 				}
 				else 
 				{
 					previousNode->Next = newNode;
 					newNode->Next = nodePtr;
 				}
 			}
 		}
		void deleteNode(int num){
			Node *nodePtr;
			Node *previousNode;
			
			if(!head)
			return;
			
			if(head->value == num){
				nodePtr = head->Next;
				delete head;
				head = nodePtr;
			}
			else
			{
				nodePtr = head;
				
				while(nodePtr != nullptr && nodePtr->value !=num){
					previousNode = nodePtr;
					nodePtr = nodePtr->Next;
				}
				
				if(nodePtr){
					previousNode->Next = nodePtr->Next;
					delete nodePtr;
					length -= 1;
				}
			}
			
		}
		void deletePosition(int num){
			Node *nodePtr;
			Node *previousNode;
			int position = 0;
			
			if(!head)
			return;
			
			if(num == 0){
				nodePtr = head->Next;
				delete head;
				head = nodePtr;
			}
			else
			{
				nodePtr = head;
				
				while(nodePtr != nullptr && position != num){
					previousNode = nodePtr;
					nodePtr = nodePtr->Next;
					position++;
				}
				
				if(nodePtr){
					previousNode->Next = nodePtr->Next;
					delete nodePtr;
					length -= 1;
				}
			}
		}
		void displayList() const
		{
 			Node *nodePtr; 
			nodePtr = head;

			while (nodePtr)
 			{

 				cout << nodePtr->value << endl;

				nodePtr = nodePtr->Next;
 			}
 		}
			
};

int main(){
	
	LinkedList myList;
	myList.appendNode(5);
	myList.appendNode(6);
	myList.deleteNode(6);
	myList.appendNode(7);
	myList.deletePosition(1);
	myList.displayList();
	
	return 0;
}

