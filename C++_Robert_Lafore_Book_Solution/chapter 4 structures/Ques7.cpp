#include <iostream>
#include <iomanip>
using namespace std;
enum etype{ laborer, secretary, manager, accountant, executive, researcher};
struct date{
	int month, day, year;
};
struct employee {
    int emp_num ;
    float emp_com ;
    };
int main()
{
    employee emp1 ;
    employee emp2 ;
    employee emp3 ;
    etype emp_type1;
    etype emp_type2;
    etype emp_type3;
    char emp_type_char;
    char temp;
    date d1;
    date d2;
    date d3;
    cout << "Enter first employee number: " ;
    cin >> emp1.emp_num ;
    cout << "Enter first employees compensation: " ;
    cin >> emp1.emp_com ;
    cout << "Enter first employee type (l,s,m,a,e,r): ";
    cin>>emp_type_char;
	switch(emp_type_char) {
        case 'l':
            emp_type1 = laborer;
            break;
        case 's':
            emp_type1 = secretary;
            break;
        case 'm':
            emp_type1 = manager;
            break;
        case 'a':
            emp_type1 = accountant;
            break;
        case 'e':
            emp_type1 = executive;
            break;
        case 'r':
            emp_type1 = researcher;
            break;
        default:
            cout << "Invalid employee type.";
    }
    cout << "Enter first employees date (MM/DD/YYYY): ";
	cin >> d1.month >> temp >> d1.day >> temp >> d1.year;
	cout<<"\n  Employee 1: ";
	cout<< "\nEmployee Number: "<< emp1.emp_num;
	cout<<"\nEmployee Type: "<< emp_type1;
	 switch(emp_type1) {
        case laborer:
            cout << "\nEmployee type is laborer." ;
            break;
        case secretary:
            cout << "\nEmployee type is secretary." ;
            break;
        case manager:
            cout << "\nEmployee type is manager." ;
            break;
        case accountant:
            cout << "\nEmployee type is accountant." ;
            break;
        case executive:
            cout << "\nEmployee type is executive." ;
            break;
        case researcher:
            cout << "\nEmployee type is researcher.";
            break;
    }
    cout<<"\nDate Of Employee: "<< d1.month << "/" << d1.day << "/" << d1.year;
    cout << "\n\nEnter second employee number: " ;
    cin >> emp2.emp_num ;
    cout << "Enter second employees compensation: " ;
    cin >> emp2.emp_com ;
    cout << "Enter second employee type (l,s,m,a,e,r): ";
    cin>>emp_type_char;
	switch(emp_type_char) {
        case 'l':
            emp_type2 = laborer;
            break;
        case 's':
            emp_type2 = secretary;
            break;
        case 'm':
            emp_type2 = manager;
            break;
        case 'a':
            emp_type2 = accountant;
            break;
        case 'e':
            emp_type2 = executive;
            break;
        case 'r':
            emp_type2 = researcher;
            break;
        default:
            cout << "Invalid employee type.";
    }
    cout << "Enter second employees date (MM/DD/YYYY): ";
	cin >> d2.month >> temp >> d2.day >> temp >> d2.year;
	cout<<"\n  Employee 2: ";
	cout<< "\nEmployee Number: "<< emp2.emp_num;
	cout<<"\nEmployee Type: "<< emp_type2;
	 switch(emp_type2) {
        case laborer:
            cout << "\nEmployee type is laborer." ;
            break;
        case secretary:
            cout << "\nEmployee type is secretary." ;
            break;
        case manager:
            cout << "\nEmployee type is manager." ;
            break;
        case accountant:
            cout << "\nEmployee type is accountant." ;
            break;
        case executive:
            cout << "\nEmployee type is executive." ;
            break;
        case researcher:
            cout << "\nEmployee type is researcher.";
            break;
    }
    cout<<"\nDate Of Employee: "<< d2.month << "/" << d2.day << "/" << d2.year;
    cout << "\nEnter third employee number: " ;
    cin >> emp3.emp_num ;
    cout << "Enter third employees compensation: " ;
    cin >> emp3.emp_com ;
    cout << "Enter third employee type (l,s,m,a,e,r): ";
    cin>>emp_type_char;
	switch(emp_type_char) {
        case 'l':
            emp_type3 = laborer;
            break;
        case 's':
            emp_type3 = secretary;
            break;
        case 'm':
            emp_type3 = manager;
            break;
        case 'a':
            emp_type3 = accountant;
            break;
        case 'e':
            emp_type3 = executive;
            break;
        case 'r':
            emp_type3 = researcher;
            break;
        default:
            cout << "Invalid employee type.";
    }
    cout << "Enter third employees date (MM/DD/YYYY): ";
	cin >> d3.month >> temp >> d3.day >> temp >> d3.year;
	cout<<"\n  Employee 3: ";
	cout<< "\nEmployee Number: "<< emp3.emp_num;
	cout<<"\nEmployee Type: "<< emp_type3;
	 switch(emp_type3) {
        case laborer:
            cout << "\nEmployee type is laborer." ;
            break;
        case secretary:
            cout << "\nEmployee type is secretary." ;
            break;
        case manager:
            cout << "\nEmployee type is manager." ;
            break;
        case accountant:
            cout << "\nEmployee type is accountant." ;
            break;
        case executive:
            cout << "\nEmployee type is executive." ;
            break;
        case researcher:
            cout << "\nEmployee type is researcher.";
            break;
    }
    cout<<"\nDate Of Employee: "<< d3.month << "/" << d3.day << "/" << d3.year;
}
