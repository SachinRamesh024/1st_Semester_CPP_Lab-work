#include <iostream>
using namespace std;

void zeroSmaller(int &num1, int &num2) {
    if (num1 < num2) {
        num1 = 0;
    } else {
        num2 = 0;
    }
}

int main() {
    int a = 7;
    int b = 3;

    cout << "Before zeroSmaller: a = " << a << ", b = " << b << endl;

    zeroSmaller(a, b);

    cout << "After zeroSmaller: a = " << a << ", b = " << b << endl;

    return 0;
}

