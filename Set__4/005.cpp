	//create a class which have both static data member and static member function. That class gives details of all states in India
#include<iostream>
using namespace std;
class State
{
	public :
		
		static char s1[100],s2[100],s3[100],s4[100],s5[100];
		
	static	void setdata()
	{
		cout<<"Enter the 1 state "<<endl;
		cin>>s1;
		cout<<"Enter the 2 state "<<endl;
		cin>>s2;
		cout<<"Enter the 3 state "<<endl;
		cin>>s3;
		cout<<"Enter the 4 state "<<endl;
		cin>>s4;
		cout<<"Enter the 5 state "<<endl;
		cin>>s5;
		
	}
	static void getdata()
	{
		cout<<"1 state"<<s1<<endl<<"2 state"<<s2<<endl<<"3 state"<<s3<<endl<<"4 state"<<s4<<endl<<"5 state"<<s5<<endl;
	}
};

	char State::s1[100]; 
	char State::s2[100];
	char State::s3[100];
	char State::s4[100];
	char State::s5[100];	
	
main()
{
	State:: setdata();
	State:: getdata();
}
