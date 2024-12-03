#include<iostream>
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;
public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void display() const {
        cout<< "Total Cars: " << totalCars <<endl;
        cout<< "Total Cash: $" << totalCash <<endl;
    }
};

int main() {
    using namespace std;

    TollBooth tollBooth;
    char key;

    cout<< "Press 'P' to count a paying car, 'N' for a non-paying car, or 'Esc' to exit." << endl;

    do {
        key = cin.get();
        cin.ignore(); 

        switch (key) {
            case 'P':
            case 'p':
                tollBooth.payingCar();
                cout<< "Paying car counted." << endl;
                break;
            case 'N':
            case 'n':
                tollBooth.display();
                cout<< "Non-paying car counted." << endl;
                break;
            case 27:  // ASCII code for Esc key
                cout<< "Exiting program." << endl;
                break;
            default:
                cout<< "Invalid input. Please try again." << endl;
        }
    } while (key != 27);

    return 0;
}

