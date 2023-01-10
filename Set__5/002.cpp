// Railway Reservation System.
//Requirements:
//(A) User Input Train Number , Train Name , Source , Destination , Train Time.
//(B) Display Record By Search Train Number.
//(C) Minimum 3 Input Train Record.
#include<iostream>
using namespace std;
class Railway
{
	private :
	
		char name[100],so[100],des[100],time[100];
		
	public :
		int no;
		void setdata()
		{
			cout<<"========== ------ Enter the train Information ------ =========="<<endl;
			cout<<"Enter the train number := ";cin>>no;
			cout<<"Enter the Train name := ";cin>>name;
			cout<<"Enter the train destination := ";cin>>des;
			cout<<"Enter the train source := ";cin>>so;
			cout<<"Enter the train time := ";cin>>time;
		}
		void getdata()
		{
		
			cout<<"Name := "<<name<<endl<<"No := "<<no<<endl<<"Destination := " <<des<<endl<<"Time := "<<time<<endl  <<"Source := "<<so<<endl<<endl;
		}
};
main()
{
	Railway r1[100];
	int i,search;


	for(i=0;i<3;i++)
	{
		r1[i].setdata();

	}
	cout<<"------------Train time table--------------"<<endl;
	for(i=0;i<3;i++)
	{
		r1[i].getdata();
		cout<<"--------------------------------------------------"<<endl;
	}
	
	cout<<"Enter the You choice Train number"<<endl;
	cin>>search;
	for(i=0;i<3;i++)
	{
		if(r1[i].no==search)
		{
			r1[i].getdata();	
		}
	}
	
}
