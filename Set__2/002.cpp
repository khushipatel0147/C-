//find factorial using recursion.

#include<iostream>
using namespace std;
void fact(int n);
main()
{
	
	int n;
	
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	fact(n);
	
}
void fact(int n)
{
	int i,sum=1;
	
	for(i=n;i>1;i--)
	{
		sum=sum*i;
	}
	cout<<"answer is := "<<sum<<endl;
}
