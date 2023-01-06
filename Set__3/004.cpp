// illustrates the use of public and private access modifiers.
#include<iostream>
using namespace std;
class Prof
{
	private :
		
		int age;
		char name[100];
		
	public:
		
	void setdata()
	{
			cout<<"name = :"<<endl;
			cin>>name;
			
			cout<<"age = :"<<endl;
			cin>>age;
	}
		
	void getdata()
	{
		cout<<endlo<<"name "<<name<<endl<<"age "<<age<<endl;
	}
};
main()
{
	Prof p1,p2;
	
	p1.setdata();
	p1.getdata();	
}