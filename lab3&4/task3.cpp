#include <iostream>
using namespace std;
int main()
 {
    char character;
    cout << "Enter a single character: ";
    cin >> character;

    if (character == 'a' || character == 'A' || 
	    character == 'e' || character == 'E' ||
        character == 'i' || character == 'I' ||
        character == 'o' || character == 'O' ||
        character == 'u' || character == 'U')
		{
          cout << "Vowel" << endl;
        } 

else{
	cout<<"Consonant";
}
    return 0;
}

