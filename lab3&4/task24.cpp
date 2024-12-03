#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string inputWord;

    cout << "Enter a word: ";
    cin >> inputWord;

    if (!inputWord.empty()) 
	{
        char firstCharacter = inputWord[0];
        cout << "First character: " << firstCharacter << endl;
    } 
	else {
       cout << "Input word is empty." << endl;
    }

    return 0;
}

