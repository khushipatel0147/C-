//WAP to make Supermarket Billing System.
//Requirements:
//(A) Verify User Id And Password
//(B) User Input Item Number , Item Name , Quantity , Tax , Discount.
//(C) Display All Record In Ascending order (by item Number)
#include<iostream>
using namespace std;
class Bigbazar
{
		private:
			int qu,tax,dis,id=312,password=123,uid,upassword;
			char itemname[100];
			
		public :
			int item_no;
			int login()
			{
				cout<<"Enter the User Id Number"<<endl;
				cin>>uid;
				cout<<"Enter the Password"<<endl;
				cin>>upassword;
				
				if(uid==id && upassword==password)
				{
					cout<<"---- Login successfully ---- \n";
					return 1;
				}
				else
				{
					cout<<" x x x ---Try again--- x x x \n";
					return 0;
				}
			}
			void buyitem()
			{
				cout<<"-------------Enter the Item-------------"<<endl;
				cout<<"Enter the item no"<<endl;
				cin>>item_no;
				cout<<"Enter the itemname"<<endl;
				cin>>itemname;
				cout<<"Enter the Quantity"<<endl;
				cin>>qu;
				cout<<"Enter the discount"<<endl;
				cin>>dis;
				cout<<"Enter the Tax"<<endl;
				cin>>tax;
			}
			void showitem()
			{
				cout<<item_no<<"\t"<<itemname<<"\t"<<qu<<"\t"<<dis<<"\t"<<tax<<"\t"<<endl;
			}
};
main()
{
	int islogin,n,i,j;	
	Bigbazar b1,b2[100],temp;

	do
	{
		islogin=b1.login();
	}
	while(islogin!=1);
	if(islogin==1)
	{
		cout<<"Enter the u buy total product number "<<endl;
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			b2[i].buyitem();
		}	
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(b2[i].item_no>b2[j].item_no)
				{
					temp=b2[j];
					b2[j]=b2[i];
					b2[i]=temp;
				}
			}
		}
	}
		cout<<"-------------Item Table----------------"<<endl;
		for(i=0;i<n;i++)
		{
			b2[i].showitem();
		}

	
}