#include <iostream>
using namespace std;

const float PI = 3.14159F;

// Function to calculate the area of a circle
float circarea(float radius) {
    return PI * radius * radius;
}

int main() {
    float rad; // variable of type float

    cout << "Enter radius of circle: "; // prompt
    cin >> rad; // get radius

    float area = circarea(rad); // call the circarea function to find the area

    cout << "Area is " << area << endl; // display answer

    return 0;
}

