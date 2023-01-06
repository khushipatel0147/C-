// generate cube of given 5 numbers and make an array of that generated cubes.

#include<iostream>
#include<math.h>
 
using namespace std;
 
main()
{
   int a[5]={1,3,5,7,9},c,i;
   
   for(i=0;i<5;i++)
   {
  	 c=0;
   	 c = a[i]*a[i]*a[i];
   	 cout<<c<<endl;
   	 
   }
   
}