//demonstrate example of copy constructor.
#include<iostream>
using namespace std;
class Shop
{
	public :
		
		Shop(Shop &s2)
		{
			cout<<"Complete your Order";
		}
		
		Shop()
		{
			
		}
};
main()
{
	Shop s2;
	Shop s1(s2);
}