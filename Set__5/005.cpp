//Bank Management System. 
#include<iostream>
using namespace std;
class Bank
{
	private :
		int acb=15000,k=0;
		char name[100],email[100],no[100],ac_no [100];	
		 
	public :
		int a;
		void infor()
		{
			cout<<"\t"<<"---------------------------"<<endl;
			cout<<"\t"<<"=: BANK MANAGMENT SYSTEM :="<<endl<<endl;
			cout<<"\t"<<"=: Designed N Programed By :="<<endl;
			cout<<"\t"<<" -----KHUSHI H KALARIYA-----"<<endl<<endl;
			cout<<"\t"<<"	=: Trainer :="<<endl;
			cout<<"\t"<<"   -----Sandip Barad-----   "<<endl;
			cout<<"\t"<<"---------------------------"<<endl;
		} 
		
		void staff()
		{
				cout<<"----------Welcome  as Staff----------"<<endl;
				cout<<"=: Enter the name of staff :=";cin>>name;
				cout<<"=: Enter the Account number of staff :=";cin>>ac_no;
				cout<<"=: Enter the Phone number of staff :=";cin>>no;
				cout<<"=: Enter the Email of staff :=";cin>>email;
		} 
		
		void acc()
		{
			cout<<"---------------------------------"<<endl;
			cout<<"Name\t           ->"<<name<<endl;
			cout<<"account number\t ->"<<ac_no<<endl;
			cout<<"phone number\t   ->"<<no<<endl;
			cout<<"Email\t          ->"<<email<<endl;           
			cout<<"---------------------------------"<<endl;
			cout<<"Press [1] to Deposite the Money-->"<<endl;
			cout<<"Press [2] to Transfer the Money-->"<<endl;
			cout<<"Press [3] to Withdraw the Money-->"<<endl;
			cin>>a;
		}
		void last()
		{
			switch(a)
			{
				case 1 :
					{
						cout<<"---------------------------------"<<endl;
						cout<<"Your Total amount is -->"<<acb<<endl;
						cout<<"---------------------------------"<<endl;
						cout<<"Your Deposite money is";
						cin>>k;
						cout<<endl<<"Congratulation Your Amount has Deposite Successfully"<<endl;
						cout<<endl<<"Your Account Amount is := "<<acb+k<<endl;
						break;
					}	
				case 2 :
					{
						cout<<"---------------------------------"<<endl;
						cout<<"Your Total amount is -->"<<acb<<endl;
						cout<<"---------------------------------"<<endl;
						cout<<"Your Transfer money is";
						cin>>k;
						cout<<endl<<"Congratulation Your Amount has Transfer Successfully"<<endl;
						cout<<endl<<"Your Account Amount is := "<<acb-k<<endl;
						break;
					}
				case 3 :
					{
						cout<<"---------------------------------"<<endl;
						cout<<"Your Total amount is -->"<<acb<<endl;
						cout<<"---------------------------------"<<endl;
						cout<<"Your Withdraw money is";
						cin>>k;
						cout<<endl<<"Congratulation Your Amount has Withdraw Successfully"<<endl;
						cout<<endl<<"Your Account Amount is := "<<acb-k<<endl;
						break;
					}
				default :
					{
						cout<<"invalid";
					}
			}	
		}
};
main()
{
		Bank  b1;
		b1.infor();
		int n;
		char s;
		
		cout<<"Press 3 for continue..... & Press any key for Exit....."<<endl;
		cin>>n;
		cout<<""<<endl;
		if(n==3)
		{
			cout<<"Press S to Log in as Staff := ";cin>>s;
		}
		if(s=='s')
		{
			b1.staff();
			b1.acc();
		}
			b1.last();
		
}