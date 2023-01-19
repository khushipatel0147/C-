	// create a class that contains four member functions,
	//with 0, 1, 2, and 3 int arguments, respectively.
	//Create a main( ) that makes an object of your class and calls each of the member functions.
	//Now modify the class so it has instead a single member function with all the arguments defaulted
#include<iostream>
using namespace std;
class Apple 
{
	public :
		int a=110;
			void setdata()
				{
					cout<<a<<endl;
				}
};
class Ball
{
	public :
		int b=120;
			void setdata()
				{
					cout<<b<<endl;
				}
};
class Cat
{
		public :
		int c=130;
			void setdata()
				{
					cout<<c<<endl;
				}
};
class Dog
{
		public :
		int d=140;
			void setdata()
				{
					cout<<d<<endl;
				}
};
class Elephant
{
		public :
		int e=150;
			void setdata()
				{
					cout<<e<<endl;
				}
};
class All
{
	public :
		void getdata()
		{
			Apple a1;
			Ball b1;
			Cat c1;
			Dog d1;
			Elephant e1;
			
			a1.setdata();
			b1.setdata();
			c1.setdata();
			d1.setdata();
			e1.setdata();
		}
};
main()
{
	All a1;
	a1.getdata();
}