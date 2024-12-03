#include <iostream>
using namespace std;
int main()
 {
    double num1, num2;

   cout << "Enter the first number: ";
   cin >> num1;

   cout << "Enter the second number: ";
   cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    }
	 else if (num1 < num2) {
        cout << num2 << " is greater than " << num1 << endl;
    } 
	else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}

