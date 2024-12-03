#include <iostream>
using namespace std;
int main()
 {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >=10 && number <= 99)
	{
        cout << "The entered number is a double-digit number." <<endl;
    }
	 else {
       cout << "The entered number is not a double-digit number." <<endl;
          }
    return 0;
}

