#include<iostream>
using namespace std;

int main() {
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(int);

    // Print the elements in reverse order
    cout << "Elements in reverse order: ";
    for (int i = size - 1; i >= 0; --i) {
        cout << array[i];
        if (i > 0) {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}

