#include<iostream>
using namespace std;

class IntArray
 {
 private:
 int *aptr; // Pointer to the array
 int arraySize; // Holds the array size
 void subscriptError(); // Handles invalid subscripts
 
 public:
 class subsError
 {};	
 IntArray(int); // Constructor
 IntArray(const IntArray &); // Copy constructor
 ~IntArray(); // Destructor

 int size() const // Returns the array size
 { return arraySize;}

 int &operator[](const int &); // Overloaded [] operator
 };
 
 IntArray::IntArray(int s)
 {
 arraySize = s;
 aptr = new int [s];
 for (int count = 0; count < arraySize; count++)
 *(aptr + count) = 0;
 }

 IntArray::IntArray(const IntArray &obj)
 {
 arraySize = obj.arraySize;
 aptr = new int [arraySize];
 for(int count = 0; count < arraySize; count++)
 *(aptr + count) = *(obj.aptr + count);
 }

 IntArray::~IntArray()
 {
 if (arraySize > 0)
 delete [] aptr;
 }


 void IntArray::subscriptError()
 {
throw subsError();
 }

int &IntArray::operator[](const int &sub)
 {
 if (sub < 0 || sub >= arraySize)
 subscriptError();
 return aptr[sub];
 }

int main(){
	IntArray array(5);
	int num;
	
	try{
		cout<<"Input which array index to access: ";
		cin>>num;
		cout<<array[num];
	}
	catch(IntArray::subsError){
		cout<<"Error";
		exit(0);
	}
}
