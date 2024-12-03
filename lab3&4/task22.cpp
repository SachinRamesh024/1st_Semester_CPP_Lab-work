#include <iostream>
using namespace std;
int main() 
{
    int seconds, minutes, hours;

    cout << "Input seconds: ";
    cin >> seconds;

    minutes = seconds / 60;

    hours = minutes / 60;

    cout << "Minutes: " << minutes << endl;
    cout << "Hours: " << hours << endl;

    return 0;
}

