#include <iostream>
using namespace std;

// Function to set the smaller of two numbers to 0
void zeroSmaller(int &num1, int &num2) {
    if (num1 < num2) {
        num1 = 0;
    } else {
        num2 = 0;
    }
}

int main() {
    int num1, num2;

    // Input from the user
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Call the zeroSmaller function and display the result
    zeroSmaller(num1, num2);

    cout << "After zeroSmaller function:\n";
    cout << "First integer: " << num1 << "\n";
    cout << "Second integer: " << num2 << "\n";

    return 0;
}

