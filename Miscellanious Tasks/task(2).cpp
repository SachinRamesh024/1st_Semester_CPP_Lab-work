#include <iostream>
using namespace std;

int main() 
{
    float numerator, denominator;
    
    cout << "Enter values for numerator and denominator separated by '/': ";
    cin >> numerator;
    cin.ignore(); // Ignore the '/' character
    cin >> denominator;

    float product = numerator / denominator;

    cout << "The product of " << numerator << "/" << denominator << " is = " << product << endl;

    return 0;
}

