#include<iostream>
using namespace std;

int main() {
    int array[10] = {1, 2, 3, 5, 8, 10, 12, 23, 28, 15};
    int size = sizeof(array) / sizeof(int);

    // Input from the user
    int Value;
    cout << "Enter an integer value to search: ";
    cin >> Value;

    // Search for the value in the array
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (array[i] == Value) {
            found = true;
            break;
        }
    }

    // Display the result
    if (found) {
        cout << "Number is Found." << endl;
    } else {
        cout << "Number does not Found." << endl;
    }

    return 0;
}

