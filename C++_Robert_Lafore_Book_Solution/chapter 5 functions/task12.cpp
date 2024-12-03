#include <iostream>

using namespace std;

// Structure to represent a fraction
struct Fraction {
    int numerator;
    int denominator;
};

// Functions for arithmetic operations
Fraction fadd(const Fraction& a, const Fraction& b) { return {a.numerator * b.denominator + b.numerator * a.denominator, a.denominator * b.denominator}; }
Fraction fsub(const Fraction& a, const Fraction& b) { return {a.numerator * b.denominator - b.numerator * a.denominator, a.denominator * b.denominator}; }
Fraction fmul(const Fraction& a, const Fraction& b) { return {a.numerator * b.numerator, a.denominator * b.denominator}; }
Fraction fdiv(const Fraction& a, const Fraction& b) { return {a.numerator * b.denominator, a.denominator * b.numerator}; }

// Function to display a fraction
void displayFraction(const Fraction& frac) {
    cout << frac.numerator << "/" << frac.denominator;
}

int main() {
    Fraction fraction1, fraction2;

    // Get input for fractions
    cout << "Enter the first fraction (numerator denominator): ";
    cin >> fraction1.numerator >> fraction1.denominator;

    cout << "Enter the second fraction (numerator denominator): ";
    cin >> fraction2.numerator >> fraction2.denominator;

    // Perform arithmetic operations and display the results
    cout << "\nResults:" << endl;
    cout << "Sum: "; displayFraction(fadd(fraction1, fraction2)); cout << endl;
    cout << "Difference: "; displayFraction(fsub(fraction1, fraction2)); cout << endl;
    cout << "Product: "; displayFraction(fmul(fraction1, fraction2)); cout << endl;
    cout << "Division: "; displayFraction(fdiv(fraction1, fraction2)); cout << endl;

    return 0;
}

