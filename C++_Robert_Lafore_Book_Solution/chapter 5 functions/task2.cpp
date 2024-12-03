#include <iostream>
#include <cmath>  // Include cmath for the pow function
using namespace std;

// Function to calculate the power of a number
double power(double n, int p = 2) {
    return pow(n, p);
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent (default is 2): ";
    cin >> exponent;

    // Call the power function with user input and display the result
    double result = power(base, exponent);
    cout << "Result: " << result << endl;

    return 0;
}

