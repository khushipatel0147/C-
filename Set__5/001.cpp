// class for student to get and print details of N students. (with use of array of objects)
#include<iostream>
using namespace std;
class Student
{
	private:
		int  no,mo_no;
		char name[100],add[100],school[100];
		
	public:
		void setdata()
			{
				cout<<"-------Fill up Student Information---------"<<endl;
				cout<<"Name ";
				cin>>name;
				cout<<"Add ";
				cin>>add;
				cout<<"School ";
				cin>>school;
				cout<<"Mo no ";
				cin>>mo_no;
				cout<<"no ";
				cin>>no;
								
			}
		void getdata()
			{
				cout<<"-------Student____Information---------"<<endl;
				cout<<"name___"<<name<<endl<<"add___"<<add<<endl<<"school____"<<school<<endl<<"mo_no____"<<mo_no<<endl<<"no____"<<no<<endl;
			}	
};
main()
{
	int n,i;
	
	Student s1[100];
	cout<<"enter the student Information's no";
	cin>>n;
		      
	
	for(i=0;i<n;i++)
	{
		s1[i].setdata();
	}
	
	for(i=0;i<n;i++)
	{
		s1[i].getdata();
	}
}