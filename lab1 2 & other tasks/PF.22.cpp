#include <iostream>
using namespace std;
int main() {
    // Declare and initialize two variables
    int a = 5;
    int b = 10;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Swap the values using a temporary variable
    a=a^b;
    b=a^b;
    a=a^b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

