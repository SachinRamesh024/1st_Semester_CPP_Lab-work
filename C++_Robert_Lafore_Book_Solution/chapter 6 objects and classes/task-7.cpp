#include <iostream>
using namespace std;
class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    Angle(int d, float m, char dir) : degrees(d), minutes(m), direction(dir) {}

    void getAngle() {
        cout << "Enter angle value in degrees and minutes: ";
        cin >> degrees >> minutes;

        cout << "Enter direction (N, S, E, or W): ";
        cin >> direction;
    }

    void displayAngle() const {
        cout << degrees << '\xF8' << minutes << "' " << direction;
    }
};

int main() {
    Angle initialAngle(149, 34.8, 'W');

    cout << "Initialized Angle: ";
    initialAngle.displayAngle();
    cout <<endl;

    Angle userAngle(0, 0.0, 'N');

    char choice;
    do {
        userAngle.getAngle();
        cout << "Entered Angle: ";
        userAngle.displayAngle();
        cout <<endl;

        cout << "Do you want to enter another angle? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}

