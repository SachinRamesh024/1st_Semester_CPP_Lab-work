#include <iostream>
using namespace std;
int main()
 {
    double number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    if (number1 == number2) {
        cout << "Numbers are equal." <<endl;
    } else {
        cout << "Numbers are not equal." <<endl;
    }

    return 0;
}

