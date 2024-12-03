#include <iostream>
#include <string>
using namespace std;
int main() 
{
   string houseNumber, street, apartmentNumber, city, state, postalCode;

    cout << "Enter the house number: ";
   getline(cin, houseNumber);

    cout << "Enter the street: ";
    getline(cin, street);

    cout << "Enter the apartment number (optional): ";
    getline(cin, apartmentNumber);

    cout << "Enter the city: ";
    getline(cin, city);

    cout << "Enter the state: ";
    getline(cin, state);

    cout << "Enter the postal code: ";
    getline(cin, postalCode);

    cout << "\nAddress:\n" << houseNumber << " " << street <<endl;
    if (!apartmentNumber.empty()) {
        cout << "Apt " << apartmentNumber <<endl;
    }
    cout << city << ", " << state << " " << postalCode <<endl;

    return 0;
}

