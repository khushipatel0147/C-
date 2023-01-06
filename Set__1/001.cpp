//check given string is numeric or not.
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[100];
	int n,i,alpha=0,no=0;
	
	cout<<"Enter The String"<<endl;
	cin>>a;
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{ 	
		
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
		{
			alpha++;
		}	
		else if(a[i]>='0' && a[i]<='9')
		{
			no++;
		}
	}
	//	cout<<no<<endl;
		if(no==0)
		{
			cout<<"This value is Not Numeric"<<endl;
		}
		else
		{
			cout<<"This Value is Numeric";
		}
	
}