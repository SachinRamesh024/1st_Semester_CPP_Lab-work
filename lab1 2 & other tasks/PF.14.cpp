#include <iostream>

using namespace std;

int main()
 {
    int num1, num2, num3, num4;
    int total, average;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    cout << "Enter the fourth number: ";
    cin >> num4;

    total = num1 + num2 + num3 + num4;
    average = total / 4;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}

