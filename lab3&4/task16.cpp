#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"Number:";
	cin>>number; 

    if (number % 2 == 0) {
        number++;
    }
    else {
        int square = number * number;
        cout << "The square of " << number << " is: " << square <<endl;
    }
    if (number == 0)
	 {
        number = 10;
        int cube = number * number * number;
        cout << "The cube of " << number << " is: " << cube <<endl;
    }
    cout << "Modified number: " << number <<endl;

    return 0;
}

