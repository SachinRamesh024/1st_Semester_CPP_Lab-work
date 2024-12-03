#include <iostream>
#include <cmath>
using namespace std;

// Overloaded function for double
double power(double n, int p = 2) {
    return pow(n, p);
}

// Overloaded function for int
int power(int n, int p = 2) {
    return static_cast<int>(pow(n, p));
}

// Overloaded function for char
char power(char n, int p = 2) {
    return static_cast<char>(pow(n, p));
}

// Overloaded function for long
long power(long n, int p = 2) {
    return static_cast<long>(pow(n, p));
}

// Overloaded function for float
float power(float n, int p = 2) {
    return pow(n, p);
}

int main() {
    // Test with different data types
    cout << "power(2.5, 3): " << power(2.5, 3) << endl;
    cout << "power(4, 3): " << power(4, 3) << endl;
    cout << "power('A', 2): " << power('A', 2) << endl;
    cout << "power(5L, 2): " << power(5L, 2) << endl;
    cout << "power(3.14f, 2): " << power(3.14f, 2) << endl;

    return 0;
}

