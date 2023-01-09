//create a class which Read and print Class, Student details using Two Classes. 
//(Make two classes, create one classe's obj in another class.)
#include<iostream>
using namespace std;
class Apple 
{
	public:
		
	int no;
	char name[100],add[100],email[100];
	
	void setdata()
	{
		cout<<"--------------Student's Information----------"<<endl;
		cout<<"Name";
		cin>>name;
		cout<<"No";
		cin>>no;
		cout<<"Add";
		cin>>add;
		cout<<"Email";
		cin>>email;
		
	}
};
class Kiwi
{
	
	public:
		
	void getdata(Apple a1)
	{
		cout<<"-----------Student's Complete Information--------"<<endl;
		cout<<"Name"<<a1.name<<endl<<"No"<<a1.no<<endl<<"Add"<<a1.add<<endl<<"Email"<<a1.email<<endl;
	}
};
main()
{
	Apple a1;
	Kiwi k1;
	
	a1.setdata();
	k1.getdata(a1);
	
}