#include <iostream>
using namespace std;  

struct employee {
    int employeeNumber;
    float salary;
};

int main() {

    employee emp1, emp2;
    cout << "Enter details for Employee 1:\n";
    cout << "Employee Number: ";
    cin >> emp1.employeeNumber;
    cout << "Salary: ";
    cin >> emp1.salary;

    cout << "\nEnter details for Employee 2:\n";
    cout << "Employee Number: ";
    cin >> emp2.employeeNumber;
    cout << "Salary: ";
    cin >> emp2.salary;

    cout << "\nDetails for Employee 1:\n";
    cout << "Employee Number: " << emp1.employeeNumber << "\n";
    cout << "Salary: Rs" << emp1.salary << "\n";

    cout << "\nDetails for Employee 2:\n";
    cout << "Employee Number: " << emp2.employeeNumber << "\n";
    cout << "Salary: Rs" << emp2.salary << "\n";

    return 0;
}

