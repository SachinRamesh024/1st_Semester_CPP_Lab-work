#include <iostream>
#include <iomanip>
using namespace std;
struct employee {
    int emp_num ;
    float emp_com ;
    };
int main()
{
    employee emp1 ;
    employee emp2 ;
    employee emp3 ;
    cout << "Enter first employee number: " ;
    cin >> emp1.emp_num ;
    cout << "Enter first employees compensation: " ;
    cin >> emp1.emp_com ;
    cout << "Enter secound employee number: " ;
    cin >> emp2.emp_num ;
    cout << "Enter secound employees compensation: " ;
    cin >> emp2.emp_com ;
    cout << "Enter third employee number: " ;
    cin >> emp3.emp_num ;
    cout <<"Enter third employees compensation: " ;
    cin >> emp3.emp_com ;
    cout << setw(15) << "employee number" << setw(30) << "employees compensation" << endl ;
    cout << setw(10) << emp1.emp_num      << setw(20) << emp1.emp_com << endl ;
    cout << setw(10) << emp2.emp_num      << setw(20) << emp2.emp_com << endl ;
    cout << setw(10) << emp3.emp_num      << setw(20) << emp3.emp_com << endl ;
    return 0;
}
