#include <iostream>
#include <cstring>
using namespace std;

void reversit(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i)
	 {	
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    const int maxStringLength = 100;
    char inputString[maxStringLength];

    cout<< "Enter a string with embedded blanks: ";
    cin.getline(inputString, maxStringLength);

    reversit(inputString);

    cout << "Reversed String: " << inputString <<endl;

    return 0;
}

