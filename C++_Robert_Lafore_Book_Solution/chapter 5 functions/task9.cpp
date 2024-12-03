#include <iostream>
using namespace std; // Use the std namespace
// Structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};
// Function to swap two Time values
void swap(Time& t1, Time& t2) {
    Time temp = t1;
    t1 = t2;
    t2 = temp;
}
// Function to display a Time value
void displayTime(const Time& t) {
    cout << t.hours << " hours, " << t.minutes << " minutes, " << t.seconds << " seconds";
}
int main() {
    // Declare and initialize two Time values
    Time time1 = {5, 30, 45};
    Time time2 = {8, 15, 20};
    // Display the original values
    cout << "Original values:" << endl;
    cout << "Time 1: ";
    displayTime(time1);
    cout << endl;
    cout << "Time 2: ";
    displayTime(time2);
    cout << endl;
    // Call the swap function to interchange the Time values
    swap(time1, time2);
    // Display the swapped values
    cout << "\nAfter swapping:" << endl;
    cout << "Time 1: ";
    displayTime(time1);
    cout << endl;
    cout << "Time 2: ";
    displayTime(time2);
    cout << endl;

    return 0;
}

