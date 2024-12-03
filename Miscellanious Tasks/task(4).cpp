#include<iostream>
using namespace std;
int main()
{
// 1) Declare variables c, thisIsAVariable, q76354, and number to be of type int.
int c, thisIsAVariable, q76354, number;

// 2) Prompt the user to enter an integer and leave the cursor positioned after the space.
    cout << "Enter an integer: ";

// 3) Read an integer from the user at the keyboard and store it in integer variable age.
   int age;
   cin >> age;

// 4) Print the message "This is a C++ program" on one line.
   cout << "This is a C++ program" <<endl;

// 5) Print the message "This is a C++ program" on two lines. End the first line with C++.
   cout << "This is a C++" << endl << "program" <<endl;

// 6) Print the message "This is a C++ program" with each word on a separate line.
   cout << "This" << endl << "is" << endl << "a" << endl << "C++" << endl << "program" <<endl;

// 7) Print the message "this is a C++ program". Separate each word from the next by a tab.
   cout << "this\tis\ta\tC++\tprogram";

return 0;
}
