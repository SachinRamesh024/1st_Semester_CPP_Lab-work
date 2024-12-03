#include <iostream>
using namespace std;
int main()
 {
    int num1, num2, num3;
 
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 == num2 && num2 == num3) {
        cout << "All three numbers are equal." <<endl;
    }
	else {
        cout << "Numbers are not equal." <<endl;
    }
    return 0;
}

