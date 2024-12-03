#include <iostream>
using namespace std;
int main() 
{
    int number;
    int factorial = 1;

    cout<< "Enter an integer: ";
    cin>> number;

    if (number < 0)
	{
      cout << "Factorial is undefined for negative numbers." << endl;
    }
    else {
        for (int i = 1; i <= number; ++i)
		{
            factorial *= i;
        }
        cout << "Number: " << number << endl;
        cout << "Factorial: " << factorial << endl;
    }

    return 0;
}

