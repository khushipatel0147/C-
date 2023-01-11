//demonstrate example of parameterized constructor.
#include<iostream>
using namespace std;
class Multi
{
	public :
		Multi(int a, int b)
		{
			cout<<"Multiple Answer is := "<<a*b<<endl;
		}
};
main()
{
	Multi m1(10,30);
}