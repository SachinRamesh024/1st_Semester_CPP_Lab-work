#include <iostream>
using namespace std;
int main()
 {
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    double greatest = num1;

    if (num2 > greatest) {
        greatest = num2;
    }
     
	 if (num3 > greatest) {
        greatest = num3;
    }

    cout << "The greatest: " << greatest << endl;

    return 0;
}

