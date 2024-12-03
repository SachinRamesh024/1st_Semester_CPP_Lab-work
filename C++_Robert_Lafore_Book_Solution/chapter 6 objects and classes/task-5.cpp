#include <iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    void getDate() {
        cout<< "Enter date in mm/dd/yy format: ";
        char slash;
        cin>> month >> slash >> day >> slash >> year;
    }
    void showDate() const {
        cout << "Date: " << month << "/" << day << "/" << year <<endl;
    }
};

int main() {
    Date myDate;

    myDate.getDate();
    myDate.showDate();

    return 0;
}

