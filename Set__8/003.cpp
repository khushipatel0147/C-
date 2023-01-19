//which illustrate the use of Method Overriding concept.
#include<iostream>
using namespace std;
class Mummma
{
	public :
		char  a;
			void setdata(int a)
				{
					cout<<a<<endl;
				}
			
};
class Dedu
{
	public :
		char  a;
			void setdata(int a)
				{
					cout<<a<<endl;
				}
};
main()
{
	Mummma m1;
	Dedu d1;
	
	m1.setdata(123);
	d1.setdata(258);
}