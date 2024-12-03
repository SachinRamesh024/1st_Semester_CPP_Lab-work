#include <iostream>
using namespace std;
int main() 
{
    char a, b;

    cout<< "Enter first character: ";
    cin>>a;

    cout<< "Enter second character: ";
    cin>>b;

    cout<< "Characters between '" << a << "' and '" << b << "' are: ";

    int Count = 0;
    for (char c= a + 1; c<b ; ++c)
	 {
        cout<< c << " ";
        Count++;
    }
    cout << endl;
    cout << "Characters count: " << Count << endl;

    return 0;
}

