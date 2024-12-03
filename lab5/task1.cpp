#include <iostream>
using namespace std;
int main() 
{
    char c='A';
    
    for(;;)
    {
    	cout<<c <<endl;
    	++c;
    	
		if(c=='Z')
    	{
    	cout<<c <<endl;
    	break;
		}
	}

    return 0;
}

