#include<iostream>
using namespace std;
struct date{
	int month, day, year;
};
int main(){
	char temp;
	date date1;
	cout << "Enter date (MM/DD/YYYY): ";
	cin >> date1.month >> temp >> date1.day >> temp >> date1.year;
	cout << "Date is: " << date1.month << "/" << date1.day << "/" << date1.year;
    return 0;
}
