#include<iostream>
using namespace std;
struct sterling{
    int pounds, shillings, pence; 
};
int main(){
    sterling amt;
    double dPounds;
	cout << "Enter Decimal pounds: ";
	cin >> dPounds;
	amt.pounds = static_cast<int>(dPounds);
	float fracPounds = dPounds - amt.pounds;
	float dShillings =  fracPounds * 20;
	amt.shillings = static_cast<int>(dShillings);
	float fracShillings = dShillings - amt.shillings;
	amt.pence = static_cast<int>(fracShillings * 12);
	cout << "Equivalent in old notation: " << amt.pounds << "." << amt.shillings << "." << amt.pence;
    return 0;
}
