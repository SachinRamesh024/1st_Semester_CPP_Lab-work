#include <iostream>
using namespace std;
int main() {
    // Declare and initialize a double variable
    double originalNumber = 50.25;

    // Retrieve the integral and fractional parts
    long integralPart = (long)originalNumber;
    double fractionalPart = originalNumber - integralPart;

    // Display the results
    cout << "Original Number: " << originalNumber << endl;
    cout << "Integral Part: " << integralPart << endl;
    cout << "Fractional Part: " << fractionalPart << endl;

    return 0;
}

