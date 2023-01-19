// demonstrate example of hierarchical inheritance to get square and cube of a number.
#include<iostream>
using namespace std;
class Math
{
	public :
		
		int a;
		void setdata()
		{
			cout<<"Enter the Value of a :- "<<endl;
			cin>>a;
		}
};
class Square : public Math
{
	public :
	void setdata()
		{
			Math::setdata();
			cout<<"Square Answer is "<<a*a<<endl;
		}
};
class Cube : public Math
{
	public :
	void setdata()
		{
			Math::setdata();
			cout<<"Cube Answer is "<<a*a*a<<endl;
		}
};
main()
{
	Square s1;
	Cube c1;
	
	s1.setdata();
	c1.setdata();
}