	//demonstrate usage of Virtual Function
#include<iostream>
using namespace std;
class Google
{
	public :
		virtual void addition();
};
class Crome : public Google
{
	public :
		void addition()
		{
			cout<<"\t"<<"Welcome this site...";
		}
};
main()
{
	Google *g;
	Crome c1;
	
	g=&c1;
	g->addition();
}