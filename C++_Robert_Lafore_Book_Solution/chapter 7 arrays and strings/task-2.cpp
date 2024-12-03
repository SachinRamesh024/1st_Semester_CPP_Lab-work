#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    long employeeNumber;
public:
    void getdata() {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter employee number: ";
        cin >> employeeNumber;
    }

    void putdata() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Number: " << employeeNumber << endl;
    }
};

int main() {
    const int maxEmployees = 100;
    Employee employees[maxEmployees];

    int numEmployees;

    cout << "Enter the number of employees (up to 100): ";
    cin >> numEmployees;

    if (numEmployees < 1 || numEmployees > maxEmployees) {
        cout << "Invalid number of employees. Program exiting." << endl;
        return 1;
    }

    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEnter data for Employee #" << (i + 1) << ":" << endl;
        employees[i].getdata();
    }

    cout << "\nEmployee Information:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEmployee #" << (i + 1) << ":\n";
        employees[i].putdata();
    }

    return 0;
}

