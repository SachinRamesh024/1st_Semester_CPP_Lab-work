#include <iostream>
using namespace std;
int main() {
    char character;

   cout << "Enter a character: ";
   cin >> character;

    if (islower(character))
	 {
      character = toupper(character);
          cout << "The character in uppercase is: " << character <<endl;
    } 
	else if (isupper(character))
    {
	  character = tolower(character);
          cout << "The character in lowercase is: " << character <<endl;
    } 
	else {
        cout << "Invalid input. Please enter a character." <<endl;
    }

    return 0;
}

