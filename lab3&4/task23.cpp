#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() 
{
    string inputLine;

    cout << "Enter a line of text: ";
    getline(cin, inputLine);

    stringstream ss(inputLine);
    string firstWord;

    ss >> firstWord;

    cout << "First word: " << firstWord <<endl;

    return 0;
}

