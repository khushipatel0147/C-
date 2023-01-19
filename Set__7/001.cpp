//a shape class with a constructor that gives value to width and height. 
//The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
//In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
#include<iostream>
using namespace std;
class Shape
{
	public :
		int h,w;
		
		Shape()
		{
			cout<<"Enter the Value of Rectangle Height & Width "<<endl;
			cin>>h>>w;
		}
};
class Triangle : public Shape
{
	public :
		
		void area()
		{
			cout<<"Rectangle is :- "<<h*w<<endl;
		}
		
};
class Rectangle : public Shape
{
	public :
			
		void area1()
		{
			cout<<"Triangle is :- "<<h*w/2<<endl;
		}
};
main()
{
	Triangle t1;
	Rectangle r1;
	
	t1.area();
	r1.area1();
}