//check if a given character is vowel or consonant.
#include <iostream>
using namespace std;

main()
{
	char x;
	
	cout<<"Enter the first Letter of Alphabate"<<x<<endl;
	cin>>x;

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
	  cout << "Vowel" << endl;
	}
    else
    {
	    cout << "Consonant" << endl;
 	}

}