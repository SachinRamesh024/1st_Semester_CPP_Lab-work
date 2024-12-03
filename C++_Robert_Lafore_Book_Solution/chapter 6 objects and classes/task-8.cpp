#include <iostream>
using namespace std;

class SerialNumberedObject {
private:
    static int objectCount;  
    int serialNumber;       

public:
    SerialNumberedObject() {
        objectCount++;
        serialNumber = objectCount;
    }

    void reportSerialNumber() const {
        cout << "I am object number " << serialNumber <<endl;
    }
};

int SerialNumberedObject::objectCount = 0;

int main() {
    SerialNumberedObject obj1;
    SerialNumberedObject obj2;
    SerialNumberedObject obj3;

    obj1.reportSerialNumber();
    obj2.reportSerialNumber();
    obj3.reportSerialNumber();

    return 0;
}

