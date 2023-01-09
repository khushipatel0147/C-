//reate a class Hotel with fields like id, name, type, staff_size, room_size, establish_year, address, rating_type and website. 
//Illustrate the use of encapsulation (strict encapsulation) with this keyword.
#include<iostream>
#include<string.h>
using namespace std;
class Hotel
{	
	private :
		
		int id,staff,room ,establish ,rating ;
		char name[100],type[100],add[100],web[100];
		
	public:
		 
		void setdata(int id,int staff,int room ,int establish ,int rating ,char name[100],char type[100],char add[100],char web[100])
		{
				this->id=id;
				this->staff =staff ;
				this->room =room ;
				this->establish =establish;
				this->rating =rating ;
				strcpy(this->name,name);
				strcpy(this->add,add);
				strcpy(this->web,web);
				strcpy(this->type,type);

		}
		
		void getdata()
		{
			cout<<"-----------------Hotel Information----------------"<<endl;
			cout<<"Name "<<name<<endl<<"Add "<<add<<endl<<"Type "<<type<<endl<<"web "<<web<<endl<<"Id "<<id<<endl<<"Staff  "<<staff <<endl<<"Room "<<room <<endl<<"Establish "<<establish <<endl<<"Rating "<<rating <<endl;
		}
		

};
main()
{
	Hotel h1;
	
	int id,staff ,room ,establish ,rating ;
	char name[100],type[100],add[100],web[100];
		
	cout<<"------------Hotel Information-----------------"<<endl;
	cout<<"Name ";
	cin>>name;
	cout<<"Add ";
	cin>>add;
	cout<<"Type ";
	cin>>type;
	cout<<"Web ";
	cin>>web;
	cout<<"Id ";
	cin>>id;
	cout<<"Staff ";
	cin>>staff ;
	cout<<"Room ";
	cin>>room ;
	cout<<"Establish ";
	cin>>establish;
	cout<<"Rating ";
	cin>>rating ;

	
	h1.setdata(id,staff ,room ,establish ,rating ,name,type,add,web);
	h1.getdata();
	
}