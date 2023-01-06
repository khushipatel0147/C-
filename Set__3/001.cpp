//create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
#include<iostream>
using namespace std;
class Distance
{
	public :
	
	int f,i;
	void setdata()
	{
		cout<<"Enter the feet & inch"<<endl;
		cin>>f>>i;
	}
	void getdata(Distance d2)
	{
	    Distance d3;
		d3.f=f+d2.f;
		d3.i=i+d2.i;
		
		d3.f=(d3.i/12)+d3.f;
		d3.i=d3.i-((d3.i/12)*12);
		
		cout<<d3.f<<endl<<d3.i;
		
	}
};

main()
{
	Distance d1,d2;
	d1.setdata();
	d2.setdata();
	
	d1.getdata(d2);
}