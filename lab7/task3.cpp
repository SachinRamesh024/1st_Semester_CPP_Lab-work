#include <iostream>
using namespace std;

void swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    swap(a, b);

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}

