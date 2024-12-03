#include <iostream>
using namespace std;
int main() 
{
    cout << "Odd\tEven" << endl;
    
    for (int i = 1; i <= 20; i += 2)
	{
     cout<< i << "\t" << i + 1 << endl;
    }

    return 0;
}

