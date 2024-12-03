#include <iostream>
using namespace std;
int main() {
    char character;

    cout << "Enter a single character: ";
    cin >> character;

    char result = (character == 'a' || character == 'A' ||
                   character == 'e' || character == 'E' ||
                   character == 'i' || character == 'I' ||
                   character == 'o' || character == 'O' ||
                   character == 'u' || character == 'U') ? 'v' : 'c';

    if (result == 'v') {
        cout << character << " is a vowel." << endl;
    } else {
        cout << character << " is a consonant." << endl;
    }

    return 0;
}

