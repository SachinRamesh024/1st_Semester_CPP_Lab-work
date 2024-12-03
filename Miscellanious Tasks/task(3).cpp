#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int x, y, z;
    string input;

    cout << "Enter three integers separated by '??': ";
    getline(cin, input);

    size_t pos;
    while ((pos = input.find("??")) != string::npos)
	{
    input.replace(pos, 2, " ");
    }

    stringstream ss(input);
    ss >> x >> y >> z;

    cout<<x<<y<<z<< endl;

    return 0;
}

