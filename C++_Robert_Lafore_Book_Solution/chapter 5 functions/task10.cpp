#include <iostream>
using namespace std;
// Global variable to store the count
int globalCount = 0;
// Function using a global variable
void displayGlobalCount() {
    globalCount++;
    cout << "I have been called " << globalCount << " times" << endl;
}
// Function using a local static variable
void displayLocalStaticCount() {
    static int localStaticCount = 0;
    localStaticCount++;
    cout << "I have been called " << localStaticCount << " times" << endl;
}
int main() {
    cout << "Using a global variable:" << endl;
    for (int i = 0; i < 5; ++i) {
        displayGlobalCount();
    }
    cout << "\nUsing a local static variable:" << endl;
    for (int i = 0; i < 5; ++i) {
        displayLocalStaticCount();
    }

    return 0;
}
/* Using a local variable wouldn't work in this case because
 the variable's value would be reset to its initial state every time the function is called, 
 and you wouldn't be able to keep track of the total number of calls across different invocations of the function. 
 A local static variable, on the other hand,
 retains its value between function calls, making it suitable for this purpose.*/
