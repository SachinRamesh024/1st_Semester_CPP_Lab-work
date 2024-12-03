#include <iostream>
using namespace std;
int main()
 {
    char uppercaseChar, lowercaseChar;

    cout << "Enter an uppercase character: ";
    cin >> uppercaseChar;

    if (uppercaseChar >= 'A' && uppercaseChar <= 'Z')
	 {
        lowercaseChar = uppercaseChar + ('a' - 'A');

        cout << "Upper case character: '" << uppercaseChar << "'" << endl;
        cout << "Lower case character: '" << lowercaseChar << "'" << endl;
    }
	 else {
        cout << "Invalid input. Please enter an uppercase character." << endl;
    }

    return 0;
}

