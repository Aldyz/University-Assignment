#include<iostream>
using namespace std;

template<class T>
class TestScores
{
	private:
		T *scores;
		T average = 0;
		int size;
	public:
		class negativeScore
		{};
		TestScores(){}
		TestScores(T *array, int size)
		{	
			this->size = size;
			scores = new T [size];
			for(int i = 0; i < size; i++)
			{
			*(scores+i) = *(array+i);
			}
		}
		
		void checkValues(){
			for(int i = 0; i < size; i++)
			{
			if(*(scores + i)>100 || *(scores + i) < 0)
			throw negativeScore();
			}
		}
		
		T calcAverage()
		{
		for(int i = 0; i<size; i++)
			{
				 average += *(scores+i);
			}
			return average/5;
		}
};

int main(){
	int score[5] = {98, 87, 93, 86, 90};
	TestScores<int> student(score, 5);
	
	try
	{
			student.checkValues();
	}
	catch(TestScores<int>::negativeScore){
		cout<<"Theres an Invalid Input";
		exit(0);
	}
	
	cout<<"Average: "<<student.calcAverage();
}
