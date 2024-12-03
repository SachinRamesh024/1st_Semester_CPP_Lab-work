#include <iostream>
using namespace std;
int main()
 {
    double num1, num2, num3;

    cout << "Enter 1st numbers: ";
    cin >> num1;

    cout << "Enter 2nd numbers: ";
    cin >> num2;
    
    cout << "Enter 3rd numbers: ";
    cin >>num3;
    
    if (num1 < num2 && num2 < num3) {
        cout << "Increasing order" <<endl;
    } 
	else if (num1 > num2 && num2 > num3) {
        cout << "Decreasing order" <<endl;
    } 
	else {
        cout << "Neither increasing nor decreasing" <<endl;
    }

    return 0;
}

