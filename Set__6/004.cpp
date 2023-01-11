//demonstrate example of copy constructor.
#include<iostream>
using namespace std;
class Shop
{
	
	public :
		Shop()
		{
			cout<<"Complete your order"<<endl<<endl;
		}
		~Shop()
		{
			cout<<"Thank you ! ";
		}
	
};
main()
{
	Shop s1;
}