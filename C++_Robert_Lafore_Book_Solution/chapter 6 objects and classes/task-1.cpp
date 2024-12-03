#include <iostream>
using namespace std;

class Int {
private:
    int value;
public:
    Int() : value(0) {}

    Int(int initialValue) : value(initialValue) {}

    void display() const {
        cout<<value;
    }

    Int add(const Int& other) const {
        Int result(value + other.value);
        return result;
    }
};

int main() {
	
    Int uninitialized;
    Int int1(5);
    Int int2(10);

    uninitialized = int1.add(int2);

    cout<<"Result: ";
    uninitialized.display();
    cout<<endl;

    return 0;
}

