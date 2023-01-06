//swap elements of two integer arrays using user define function.
#include<iostream>
using namespace std;
void swap (int n , int *a1, int *a2 , int i);
main()
{
	int a1[100],a2[100],i,n;
	
	cout<<"Enter the Size oh array"<<endl;
	cin>>n;
	cout<<"Enter the 1st Array"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>a1[i];
	}
	cout<<"Enter the 2nd Array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a2[i];
	}
	swap(a1,a2);
	cout<<endl<<"-----------swap------------"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a1[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		cout<<a2[i]<<endl;
	}
}
void swap (int n , int *a1, int *a2)
{
	int i=0,temp=0;
	for(i=0;i<n;i++)
	{
	temp = a1[i];
	a1[i]=a2[i];
	a2[i]=temp;
	}
}
