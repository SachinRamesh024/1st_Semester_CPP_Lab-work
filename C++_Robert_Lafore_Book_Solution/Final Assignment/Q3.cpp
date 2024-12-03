#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string employeeName;
    int empId;
    float basicSalary;

public:
    Employee(string name, int id, float salary){
		employeeName=name; 
		empId=id; 
		basicSalary=salary;
	}

    void displayInfo(){
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

class SalaryCalculator : public Employee {
private:
    float grossPay;
    float netPay;

public:
    SalaryCalculator(string name, int id, float salary):Employee(name, id, salary)	
	{
        calculatePay();
    }

    void calculatePay() {
        grossPay = basicSalary + 0.2 * basicSalary; // 20% bonus for gross pay
        netPay = grossPay - 0.1 * grossPay;        // 10% deduction for net pay
    }

    void displayPayInfo(){
        displayInfo();
        cout << "Gross Pay: " << grossPay <<endl;
        cout << "Net Pay: " << netPay <<endl;
    }
    
};

int main() {
	string name;
	int emp_id;
	float basic_salary;
	cout<<"Enter Employee Name: ";
	cin>>name;
	cout<<"Enter Employee ID: ";
	cin>>emp_id;
	cout<<"Enter Employee Basic Salary: ";
	cin>>basic_salary;
	
    SalaryCalculator employee1(name, emp_id, basic_salary);
    employee1.displayPayInfo();
    
    return 0;
}
