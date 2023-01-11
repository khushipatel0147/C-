//create a class which Set values of data members using default, parameterized and copy constructor
#include<iostream>
using namespace std;
class Math
{
		public :
			Math(int a, int b)
			{
				cout<<"Multiplae answer is "<<a*b<<endl;
			}
			Math(Math &s2)
			{
				cout<<"Hello"<<endl;
			}	
			Math()
			{
				
			}
};
main()
{
	Math m3;
	Math m2(m3);
	Math m1(10,3);
}