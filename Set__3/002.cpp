//create a class to read and add two times.
#include<iostream>
using namespace std;
class Time
{
	public :
		
 	int h=0,m=0,s=0;
 	
	void setdata()
	{
		cout<<"Enter the Time"<<endl;
		cin>>h>>m>>s;
		
	}
	
	void getdata(Time t2)
	{
		Time t3;
		
		t3.h=h+t2.h;
		t3.m=m+t2.m;
		t3.s=s+t2.s;
		
		t3.m=(t3.s/60)+t3.m;
		t3.s=t3.s-((t3.s/60)*60);
		t3.h=(t3.m/60)+t3.h;
		t3.m=t3.m-((t3.m/60)*60);
		
		cout<<endl<<endl<<"hour is"<<t3.h<<endl<<"minute is"<<t3.m<<endl<<"second is"<<t3.s<<endl;		
	}
	 
	 	
};
main()
{
	Time t1,t2;
	t1.setdata();
	t2.setdata();
	
	t1.getdata(t2);
}