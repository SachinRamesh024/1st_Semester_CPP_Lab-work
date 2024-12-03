#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
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

class Ship {
private:
    static int count;  
    int serialNumber;  
    Angle latitude;   
    Angle longitude;   

public:
    Ship() : serialNumber(++count) {}

    void getPosition() {
        cout << "Enter position for Ship " << serialNumber << ":" << std::endl;
        cout << "Latitude: ";
        latitude.getAngle();

        cout << "Longitude: ";
        longitude.getAngle();
    }

    void reportPosition() const {
        cout << "Ship Number " << serialNumber << " Position:" << std::endl;
        cout << "Latitude: ";
        latitude.displayAngle();
        cout << std::endl;

        cout << "Longitude: ";
        longitude.displayAngle();
        cout <<endl;
    }
};

int Ship::count = 0;

int main() {
   
    Ship ship1, ship2, ship3;

    ship1.getPosition();
    ship2.getPosition();
    ship3.getPosition();

    ship1.reportPosition();
    ship2.reportPosition();
    ship3.reportPosition();

    return 0;
}


