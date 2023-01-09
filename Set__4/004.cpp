//create two class HighSchool and College with fields like id, stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address.
// Make suitable setter and getter with use of static data members.
#include<iostream>
using namespace std;
class Highschool
{
	public :
		static	char name[100],institute[100],add[100];
		static	int id,roll,std,age,mo;
		
	static void setdata()
	{
		cout<<"-----------Enter the  Highschool Student's Information----------"<<endl;
		cout<<"Enter the Student Name";
		cin>>name;
		cout<<"Enter the Student Id";
		cin>>id;
		cout<<"Enter the Student Roll";
		cin>>roll;
		cout<<"Enter the Student Std";
		cin>>std;
		cout<<"Enter the Student Age";
		cin>>age;
		cout<<"Enter the Student Mo";
		cin>>mo;
		cout<<"Enter the Student Institute";
		cin>>institute;
		cout<<"Enter the Student Add";
		cin>>add;
	}
	static	void getdata()
	{
		cout<<"Name -> "<<name<<endl<<"Id -> "<<id<<endl<<"Roll -> "<<roll<<endl<<"Std -> "<<std<<endl<<"Age -> "<<age<<endl<<"Mo -> "<<mo<<endl<<"Institute -> "
		<<institute<<endl<<"Add -> "<<add<<endl;
	}
		
};
class Collage
{
	public :
		
	static void setter()
	{
		cout<<"-----------Enter the  Collage Student's Information----------"<<endl;
		cout<<"Enter the Student Name";
		cin>>Highschool::name;
		cout<<"Enter the Student Id";
		cin>>Highschool::id;
		cout<<"Enter the Student Roll";
		cin>>Highschool::roll;
		cout<<"Enter the Student Std";
		cin>>Highschool::std;
		cout<<"Enter the Student Age";
		cin>>Highschool::age;
		cout<<"Enter the Student Mo";
		cin>>Highschool::mo;
		cout<<"Enter the Student Institute";
		cin>>Highschool::institute;
		cout<<"Enter the Student Add";
		cin>>Highschool::add;
	}
	static void getter()
	{
		cout<<"Name -> "<<Highschool::name<<endl<<"Id -> "<<Highschool::id<<endl<<"Roll -> "<<Highschool::roll<<endl<<"Std -> "<<Highschool::std<<endl<<"Age -> "<<Highschool::age<<endl<<"Mo -> "<<Highschool::mo<<endl<<"Institute -> "
		<<Highschool::institute<<endl<<"Add -> "<<Highschool::add<<endl;
	}
};

int Highschool ::id;
int Highschool ::mo;
int Highschool ::roll;
int Highschool ::std;
int Highschool ::age;
char Highschool ::name[100];
char Highschool ::add[100];
char Highschool ::institute[100];

main()
{
	Highschool::setdata();
	Highschool::getdata();
	
	Collage::setter();
	Collage::getter();
}