#include<iostream>
#include<cmath>
using namespace std;

class MyPoint{
	private:
		int x = 0;
		int y = 0;
	public:
		MyPoint(){
		}
		MyPoint(int x, int y){
			this->x = x;
			this->y = y;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
		void setX(int x){
			this->x = x;
		}
		void setY(int y){
			this->y = y;
		}
		int getXY(){
			int array[2] = {x, y};
			return *array;
		}
		void setXY(int x, int y){
			this->x = x;
			this->y = y;
		}
		string toString(){
			return "(" + to_string(x) + "," + to_string(y) + ")";
		}
		double distance(int x, int y){
			return sqrt(pow(this->x - x, 2) + pow(this->y - y, 2));
		}
		double distance(MyPoint another){
			return sqrt(pow(another.getX() - x, 2) + pow(another.getY() - y, 2));
		}
		double distance(){
			return sqrt(pow(x,2) + pow(y,2));
		}
};

class MyCircle{
	private:
		MyPoint center;
		int radius = 1;
	public:
		MyCircle(){}
		MyCircle(int x, int y, int radius){
			this->radius = radius;
			center.setXY(x, y);
		}
		MyCircle(MyPoint center, int radius){
			this->center = center;
			this->radius = radius;
		}
		int getRadius(){
			return radius;
		}
		void setRadius(int radius){
			this->radius = radius;
		}
		MyPoint getCenter(){
			return center;
		}
		void setCenter(MyPoint center){
			this->center = center;
		}
		int getCenterX(){
			return center.getX();
		}
		void setCenterX(int x){
			center.setX(x);
		}
		int getCenterY(){
			return center.getY();
		}
		void setCenterY(int y){
			center.setY(y);
		}
		int getCenterXY(){
			return center.getXY();
		}
		int setCenterXY(int x, int y){
			center.setX(x);
			center.setY(y);
		}
		string toString(){
			return "Radius: " + to_string(radius) + ", " + center.toString();
		}
		double getArea(){
			return radius*radius*3.14;
		}
		double getCircumference(){
			return radius*2*3.14;
		}
		double distance(MyCircle another){
			return center.distance(another.getCenter());
		}
};

class MyTriangle{
	private:
		MyPoint V1;
		MyPoint V2;
		MyPoint V3;
	public:
		MyTriangle(int x1, int y1, int x2, int y2, int x3, int y3){
			V1.setXY(x1, y1);
			V2.setXY(x2, y2);
			V3.setXY(x3, y3);
		}
		MyTriangle(MyPoint V1, MyPoint V2, MyPoint V3){
			this->V1 = V1;
			this->V2 = V2;
			this->V3 = V3;
		}
		string toString(){
			return to_string(V1.getX()) + " " + to_string(V1.getY()) + '\n' + to_string(V2.getX()) + " " +
					to_string(V2.getY()) + '\n' + to_string(V3.getX()) + to_string(V3.getY());
		}
};

int main(){
	MyPoint point(3, 4);
	
	MyCircle circle;
	
	circle.setRadius(2);
	
	cout<<circle.toString()<<endl;
	
	cout<<point.distance();
}
