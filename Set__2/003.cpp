// illustrate the use of inline function by creating a function which prints a multiplication table of given number.
#include<iostream>
using namespace std;
void tab(int n);
main()
{
	int n;
	
	cout<<"enter the value of n"<<endl;
	cin>>n;
	tab(n);
	
}
inline void tab(int n)
{
	int k,i;
	
	for(i=1;i<=10;i++)
	{
		k=0;
		k=n*i;
		cout<<n <<"  X  "<<i<<"  =  "<<k<<endl;
	}
}