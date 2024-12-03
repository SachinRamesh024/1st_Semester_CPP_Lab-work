#include <iostream>
using namespace std;

enum EType { LABORER, SECRETARY, MANAGER, OTHER };

class Date {
private:
    int month;
    int day;
    int year;

public:
    void getDate() {
        cout << "Enter date in mm/dd/yy format: ";
        char slash;
        cin >> month >> slash >> day >> slash >> year;
    }

    void showDate() const {
        cout << "Date: " << month << "/" << day << "/" << year;
    }
};

class Employee {
private:
    int employeeNumber;
    float compensation;
    Date hireDate;
    EType employeeType;

public:
    void getEmploy() {
        cout<< "Enter employee number: ";
        cin>>employeeNumber;

        cout<< "Enter employee compensation: $";
        cin>>compensation;

        cout<< "Enter employee type (0 for LABORER, 1 for SECRETARY, 2 for MANAGER, 3 for OTHER): ";
        int type;
        cin>>type;
        employeeType = static_cast<EType>(type);

        cout<< "Enter date of first employment:" <<endl;
        hireDate.getDate();
    }

    void putEmploy() const {
        cout << "Employee Number: " << employeeNumber <<endl;
        cout << "Compensation: $" << compensation <<endl;
        cout << "Employee Type: ";

        switch (employeeType) {
            case LABORER:
                cout << "LABORER";
                break;
            case SECRETARY:
                cout << "SECRETARY";
                break;
            case MANAGER:
                cout << "MANAGER";
                break;
            case OTHER:
                cout << "OTHER";
                break;
        }

        cout <<endl << "Date of First Employment: ";
        hireDate.showDate();
        cout<<endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Enter data for Employee " << i + 1 << ":" << std::endl;
        employees[i].getEmploy();
        cout << "Employee " << i + 1 << " Data:" << std::endl;
        employees[i].putEmploy();
        cout <<endl;
    }

    return 0;
}

