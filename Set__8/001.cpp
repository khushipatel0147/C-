//create a Message class with a constructor that takes a single string with a default value.
// Create a private member string, and in the constructor simply assign the argument string to your internal string.
// Create two overloaded member functions called print( ): 
//one that takes no arguments and simply prints the message stored in the object, and 
//one that takes a string argument, which it prints in addition to the internal message.
#include<iostream>
#include<string.h>
using namespace std;
class Apple
{
	private :
		char l[100];
		
	public :
		int n,i;
		char k[100];
		Apple()
		{
			cout<<"Enter the String :- "<<endl;
			cin>>k;
			n=strlen(k);
			for(i=0;i<n;i++)
			{
				l[i]=k[i];
			}
		}
	
	void print()
	{
		cout<<"========================="<<endl;
		cout<<k;
	}
	void print(char *b)
	{
		cout<<b<<endl;
				
	}
};
main()
{
	Apple a1;
	char b[100];
	cout<<"Enter the new string :- "<<endl;
	cin>>b;
	
	a1.print();
	a1.print(b);
}