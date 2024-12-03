#include <iostream>
using namespace std;

int maxint(const int* arr, int size) {
    int maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}

int main() {
    const int maxSize = 100;
    int numbers[maxSize];
    int numElements;

    cout << "Enter the number of integers (up to 100): ";
    cin >> numElements;

    if (numElements < 1 || numElements > maxSize) {
        cout << "Invalid number of integers. Program exiting." <<endl;
        return 1;
    }

    cout << "Enter " << numElements << " integers:" <<endl;
    for (int i = 0; i < numElements; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int maxIndex = maxint(numbers, numElements);

    cout << "\nThe largest element is: " << numbers[maxIndex] <<endl;
    cout << "Index of the largest element: " << maxIndex <<endl;

    return 0;
}

