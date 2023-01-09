//reate a class Employee with setter and getter. Which have fields like id, name, role, salary, experience, address, email and contact. Get 5 records.
#include<iostream>
using namespace std;
class Emp 
{	

	private :
		
	int i,s,e,c;
	char n[100],a[100],email[100],r[100];
	
	public :
	
	void setdata()
	{
		cout<<"--------------Emp Information -------------"<<endl;
		cout<<"Enter the name"<<endl;
		cin>>n;
		cout<<"Enter the address"<<endl;
		cin>>a;
		cout<<"Enter the email"<<endl;
		cin>>email;
		cout<<"Enter the id"<<endl;
		cin>>i;
		cout<<"Enter the role"<<endl;
		cin>>r;
		cout<<"Enter the salary"<<endl;
		cin>>s;
		cout<<"Enter the experience"<<endl;
		cin>>e;
		cout<<"Enter the contact "<<endl;
		cin>>c;
	}
	
	void getdata()
	{
		cout<<"--------------Emp Saved -------------"<<endl;	
		cout<<endl<<"name  "<<n<<endl<<"address  "<<a<<endl<<"email  "<<email<<endl<<"id  "<<i<<endl<<"role  "<<r<<endl<<"salary  "<<s<<endl<<"expriance  "<<e<<endl<<"contact  "<<c<<endl;
	}
	
	
};
main()
{
	Emp e1,e2,e3,e4,e5;
	
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	e5.setdata();
	
	e1.getdata();
	e2.getdata();
	e3.getdata();
	e4.getdata();
	e5.getdata();
}