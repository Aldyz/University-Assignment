#include<iostream>
using namespace std;

template <class T>
 class SimpleVector
 {
 private:
 T *aptr; // To point to the allocated array
 int arraySize; // Number of elements in the array
 void memError(); // Handles memory allocation errors
 void subError(); // Handles subscripts out of range

 public:
 // Default constructor
 SimpleVector()
 { aptr = 0; arraySize = 0;}

 // Constructor declaration
 SimpleVector(int);

 // Copy constructor declaration
 SimpleVector(const SimpleVector &);

 // Destructor declaration
 ~SimpleVector();

 // Accessor to return the array size
 int size() const
 { return arraySize; }

 // Accessor to return a specific element
 T getElementAt(int position);

 // Overloaded [] operator declaration
 T &operator[](const int &);
 
 void push_back(T num){
 	*(aptr + arraySize) = num;
 	arraySize += 1;
 }
 
 void pop_back(){
 	arraySize -= 1;
 }
 };

template <class T>
 SimpleVector<T>::SimpleVector(int s)
 {
 arraySize = s;
 // Allocate memory for the array.
 try
 {
 aptr = new T [s];
 }
 catch (bad_alloc)
 {
 memError();
 }

 // Initialize the array.
 for (int count = 0; count < arraySize; count++)
 *(aptr + count) = 0;
 }

 template <class T>
 SimpleVector<T>::SimpleVector(const SimpleVector &obj)
 {
 // Copy the array size.
 arraySize = obj.arraySize;

 // Allocate memory for the array.
 aptr = new T [arraySize];
 if (aptr == 0)
 memError();

 // Copy the elements of obj's array.
 for(int count = 0; count < arraySize; count++)
 *(aptr + count) = *(obj.aptr + count);
 }

 template <class T>
 SimpleVector<T>::~SimpleVector()
 {
 if (arraySize > 0)
 delete [] aptr;
 }
 
template <class T>
 void SimpleVector<T>::memError()
 {
 cout << "ERROR:Cannot allocate memory.\n";
 exit(EXIT_FAILURE);
 }

 template <class T>
 void SimpleVector<T>::subError()
 {
 cout << "ERROR: Subscript out of range.\n";
 exit(EXIT_FAILURE);
 }

template <class T>
 T SimpleVector<T>::getElementAt(int sub)
 {
 if (sub < 0 || sub >= arraySize)
 subError();
 return aptr[sub];
 }

 template <class T>
 T &SimpleVector<T>::operator[](const int &sub)
 {
 if (sub < 0 || sub >= arraySize)
 subError();
 return aptr[sub];
 }
 

int main(){
	
	SimpleVector<int> array(5);
	
	for(int i = 0; i<5; i++)
	array[i] = i+1;
	
	for(int i = 0; i < 5; i++)
	cout<<array[i]<<" ";
	cout<<endl;
	array.push_back(6);
	array.push_back(7);
	array.push_back(8);
	
	for(int i = 0; i < 8; i++)
	cout<<array[i]<<" ";
	cout<<endl;
	
	array.pop_back();
	
	cout<<"\nShows Subscript Error because array index 8 is empty\n";
	for(int i = 0; i < 8; i++)
	cout<<array[i]<<" ";
	
}
