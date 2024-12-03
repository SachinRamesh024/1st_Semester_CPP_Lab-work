#include <iostream>
using namespace std;
int main()
 {
    char x;
   
    cout<<"Vowel \t\t Consonant" <<endl;
    for (x='A'; x<='Z'; x++) 
	{
       if (x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
		{
		   cout<<x;
        }
		 else {
            cout<< "\t\t" << x << endl;
            }
    }

    return 0;
}

