#include <iostream>
#include <cstdlib> // For exit function
using namespace std;

class safearay {
private:
    static const int LIMIT = 100; 
    int arr[LIMIT];

public:
    void putel(int index, int value) {
        if (index < 0 || index >= LIMIT) {
            cout << "Index out of bounds. Program exiting." <<endl;
            exit(1);
        }
        arr[index] = value;
    }

    int getel(int index) const {
        if (index < 0 || index >= LIMIT) {
            cout << "Index out of bounds. Program exiting." <<endl;
            exit(1);
        }
        return arr[index];
    }
};

int main() {
    safearay sa1;
    int temp = 12345; 

    sa1.putel(7, temp);

    temp = sa1.getel(7);
    cout << "Value at index 7: " << temp <<endl;

    return 0;
}

