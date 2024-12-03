#include <iostream>
using namespace std;
// Function to swap two int values
void swap(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main() {
    // Declare and initialize two int variables
    int a = 5;
    int b = 10;
    // Display the original values
    cout << "Original values:" <<endl;
    cout << "a: " << a <<endl;
    cout << "b: " << b <<endl;
    // Call the swap function to interchange the values
    swap(a, b);
    // Display the swapped values
    cout << "\nAfter swapping:" <<endl;
    cout << "a: " << a <<endl;
    cout << "b: " << b <<endl;

    return 0;
}

