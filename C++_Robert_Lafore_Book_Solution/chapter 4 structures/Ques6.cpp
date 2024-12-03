#include <iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive, researcher };
int main() {
    etype emp_type;
    char emp_type_char;
    cout << "Enter employee type (l,s,m,a,e,r): ";
    cin>>emp_type_char;
    switch(emp_type_char) {
        case 'l':
            emp_type = laborer;
            break;
        case 's':
            emp_type = secretary;
            break;
        case 'm':
            emp_type = manager;
            break;
        case 'a':
            emp_type = accountant;
            break;
        case 'e':
            emp_type = executive;
            break;
        case 'r':
            emp_type = researcher;
            break;
        default:
            cout << "Invalid employee type.";
            return 0;
    }  
	cout << "Employee type: " << emp_type << endl;     
    switch(emp_type) {
        case laborer:
            cout << "Employee type is laborer." ;
            break;
        case secretary:
            cout << "Employee type is secretary." ;
            break;
        case manager:
            cout << "Employee type is manager." ;
            break;
        case accountant:
            cout << "Employee type is accountant." ;
            break;
        case executive:
            cout << "Employee type is executive." ;
            break;
        case researcher:
            cout << "Employee type is researcher.";
            break;
    }
    return 0;
}
