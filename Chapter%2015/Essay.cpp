#include<iostream>
using namespace std;

//Problem 6

class GradedActivity
 {
 protected:
 double score; // To hold the numeric score
 public:
 // Default constructor
 GradedActivity()
 { score = 0.0; }

 // Constructor
 GradedActivity(double s)
 { score = s; }

 // Mutator function
 void setScore(double s)
 { score = s; }

 // Accessor functions
 double getScore() const
 { return score; }

 virtual char getLetterGrade() const
 {
 char letterGrade; // To hold the letter grade

 if (score > 89)
 letterGrade = 'A';
 else if (score > 79)
 letterGrade = 'B';
 else if (score > 69)
 letterGrade = 'C';
 else if (score > 59)
 letterGrade = 'D';
 else
 letterGrade = 'F';

 return letterGrade;
 }
 };

class Essay: public GradedActivity{
		private:
			int Grammar = 0;
			int Spelling = 0;
			int CorrectLength = 0;
			int Content = 0;
		public:
			Essay(int G, int S, int CL, int C){
				if(G <=30 && G>=0)
				Grammar = G;
				else
				cout<<"Invalid Input of Grammar"<<endl;
				
				if(S<=20 && S>=0)
				Spelling = S;
				else 
				cout<<"Invalid Input of Spelling"<<endl;
				
				if(CL<=20 && CL>=0)
				CorrectLength = CL;
				else
				cout<<"Invalid Input of Correct Length"<<endl;
				
				if(C<=30 && C>=0)
				Content = C;
				else 
				cout<<"Invalid Input of Content"<<endl;
				
				score = Grammar + Spelling + CorrectLength + Content;
			}
			
			
};

int main(){
	
	int g, s, cl, c;
	
	cout<<"Input Grammar Score: ";
	cin>>g;
	cout<<"Input Spelling Score: ";
	cin>>s;
	cout<<"Input Correct Length Score: ";
	cin>>cl;
	cout<<"Input Content Score: ";
	cin>>c;
	
	Essay student(g,s,cl,c);
	
	cout<<"Total Score: "<<student.getScore();
}
