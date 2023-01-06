//create class to read time in seconds and convert into time in (HH:MM:SS) format.
#include<iostream>
using namespace std;
class Time
{
	public:
		
	int s=0,h=0,m=0;
	
	void setdata()
	{
		cout<<"enter the second"<<endl;
		cin>>s;
	}
		
	void getdata()
	{
		
	m=(s/60)+m;
	s=s-((s/60)*60);
	h=(m/60)+h;
	m=m-((m/60)*60);

	cout<<h<<endl<<m<<endl<<s<<endl;
		
	}
}; 
main()
{
	Time t1;
	t1.setdata();
	
	t1.getdata();
}