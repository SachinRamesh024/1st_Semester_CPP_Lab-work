#include <iostream>
using namespace std;

class Employee {
private:
    int employeeNumber;
    float compensation;

public:
    void enterData() {
        cout << "Enter employee number: ";
        cin >> employeeNumber;

        cout << "Enter employee compensation: $";
        cin >> compensation;
    }

    void displayData() const {
        cout << "Employee Number: " << employeeNumber <<endl;
        cout << "Compensation: $" << compensation <<endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; ++i) {
        cout<< "Enter data for Employee " << i + 1 << ":" <<endl;
        employees[i].enterData();
        cout<< "Employee " << i + 1 << " Data:" <<endl;
        employees[i].displayData();
        cout<<endl;
    }

    return 0;
}

