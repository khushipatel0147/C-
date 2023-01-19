//read and print employee information using multiple inheritance.
#include<iostream>
using namespace std;
class Company
{
	public :
		int no,grid;
		char name[100];
		
	void setdata()
	{
		cout<<"-----------Company's Data-------------"<<endl<<endl;
		cout<<"Enter the Id No :- "<<endl;
		cin>>no;
		cout<<"Enter the Name :- "<<endl;
		cin>>name;
		cout<<"Enter the Grid no :-  "<<endl;
		cin>>grid;
	}
		
};
class Home
{
	public :
		char add[100],mo[100];
		
	void setdata1()
	{
		cout<<"-----------Home's Data-------------"<<endl<<endl;
		cout<<"Enter the mo :- "<<endl;
		cin>>mo;
		cout<<"Enter the address :- "<<endl;
		cin>>add;
	}
		
};
class Employee : public Company, public Home
{
	public :
		
	void getdata()
	{
		cout<<"-----------Employee's Data-------------"<<endl<<endl;
		cout<<"Enter the Id No :- "<<no<<endl<<"Enter the Name :- "<<name<<endl<<"Enter the Grid no :- "<<grid<<endl<<"Enter the mo :- "<<mo<<endl<<"Enter the address :- "<<
		add;
	}
		
};
main()
{
	Employee e1;
	
	e1.setdata();
	e1.setdata1();
	
	e1.getdata();
	
	
}