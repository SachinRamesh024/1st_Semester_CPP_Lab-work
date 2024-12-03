#include <iostream>
using namespace std;
class Distance {
public:
    int feet;
    int inches;

    // Constructor
    Distance(int feet = 0, int inches = 0) : feet(feet), inches(inches) {}
};

// Function to compare two Distance objects and return the larger one
Distance compareDistances(const Distance& d1, const Distance& d2) {
    // Convert both distances to inches for easy comparison
    int totalInches1 = d1.feet * 12 + d1.inches;
    int totalInches2 = d2.feet * 12 + d2.inches;

    // Compare and return the larger distance
    return (totalInches1 > totalInches2) ? d1 : d2;
}

int main() {
    // Get input for the first distance
    int feet1, inches1;
    cout << "Enter feet for the first distance: ";
    cin >> feet1;
    cout << "Enter inches for the first distance: ";
    cin >> inches1;
    Distance distance1(feet1, inches1);

    // Get input for the second distance
    int feet2, inches2;
    cout << "Enter feet for the second distance: ";
    cin >> feet2;
    cout << "Enter inches for the second distance: ";
    cin >> inches2;
    Distance distance2(feet2, inches2);

    // Compare distances and display the larger one
    Distance largerDistance = compareDistances(distance1, distance2);
    cout << "The larger distance is: " << largerDistance.feet << " feet " << largerDistance.inches << " inches." << endl;

    return 0;
}

