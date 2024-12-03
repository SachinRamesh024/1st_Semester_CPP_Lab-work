#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    void get_distance() {
        cout << "Enter feet: ";
        cin>> feet;
        cout << "Enter inches: ";
        cin>> inches;
    }

    void add_dist(const Distance& d1, const Distance& d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet;
        if (inches >= 12.0) {
            inches -= 12.0;
            feet++;
        }
    }

    void div_dist(int divisor) {
        float fltfeet = feet + inches / 12.0;
        fltfeet /= divisor;
        feet = static_cast<int>(fltfeet);
        inches = (fltfeet - feet) * 12.0;
    }

    void show_distance() const {
        cout << "Feet: " << feet << " Inches: " << inches <<endl;
    }
};

int main() {
    const int maxDistances = 100;
    Distance distances[maxDistances];
    int numDistances;

    cout << "Enter the number of distances (up to 100): ";
    cin >> numDistances;

    if (numDistances < 1 || numDistances > maxDistances) {
        cout << "Invalid number of distances. Program exiting." <<endl;
        return 1;
    }

    for (int i = 0; i < numDistances; ++i) {
        cout << "\nEnter data for Distance #" << (i + 1) << ":" <<endl;
        distances[i].get_distance();
    }

    Distance averageDistance;
    for (int i = 0; i < numDistances; ++i) {
        averageDistance.add_dist(averageDistance, distances[i]);
    }
    averageDistance.div_dist(numDistances);

    cout << "\nAverage Distance:" <<endl;
    averageDistance.show_distance();

    return 0;
}

