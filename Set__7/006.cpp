//read and print employee information with use of multilevel inheritance. (as like in below image)
#include<iostream>
using namespace std;
class A
{
	public :
		int no;
		char name[100],add[100],salary[100],email[100],co_name[100];
		
	void setdata()
	{
		cout<<"Enter the No : "<<endl;
		cin>>no;
		cout<<"Enter the Name : "<<endl;
		cin>>name;
	}
	
};
class B : public A
{
	public :
	void setdata1()
	{
		cout<<"Enter the Add : "<<endl;
		cin>>add;
		cout<<"Enter the Salary : "<<endl;
		cin>>salary;
		
	}
};
class C : public B
{
	public :
	void setdata2()
	{
		cout<<"Enter the Email : "<<endl;
		cin>>email;
		cout<<"Enter the Company Name : "<<endl;
		cin>>co_name;
		
	}
};
class D : public C
{
	public :
		void getdata()
		{
			cout<<"------------------- Employee Details----------------------"<<endl;
			cout<<"ID No :- "<<no<<endl;
			cout<<"Name :- "<<name<<endl;
			cout<<"Salary :- "<<salary<<endl;
			cout<<"Company Name :- "<<co_name<<endl;
			cout<<"Address :- "<<add<<endl;
			cout<<"Email :- "<<email<<endl;
		}
};
main()
{
	D d1;
	
	d1.setdata();
	d1.setdata1();
	d1.setdata2();
	d1.getdata();
}