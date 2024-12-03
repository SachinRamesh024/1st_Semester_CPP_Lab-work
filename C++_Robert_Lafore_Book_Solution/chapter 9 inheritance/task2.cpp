#include <iostream>
#include <cstring>

using namespace std;

class String {
public:  // Make the SZ enum public
    enum { SZ = 80 };
    char str[SZ];

public:
    String() {
        str[0] = '\0';
    }

    String(const char s[]) {
        strncpy(str, s, SZ - 1);
        str[SZ - 1] = '\0'; // Ensure null-terminated string
    }

    void display() const {
        cout << str;
    }

    operator char*() {
        return str;
    }
};

class Pstring : public String {
public:
    Pstring() : String() {}

    Pstring(const char s[]) : String() {
        strncpy(str, s, SZ - 1);
        str[SZ - 1] = '\0'; // Ensure null-terminated string
    }
};

int main() {
    String s1 = "This is a regular string.";
    Pstring ps1 = "This is a protected string.";

    cout << "Regular String: ";
    s1.display();
    cout << endl;

    cout << "Protected String: ";
    ps1.display();
    cout << endl;

    // Test with a long string
    String s2 = "This string will surely exceed the width of the screen, which is what the SZ constant represents.";
    Pstring ps2 = "This string will surely exceed the width of the screen, which is what the SZ constant represents.";

    cout << "Long Regular String: ";
    s2.display();
    cout << endl;

    cout << "Long Protected String: ";
    ps2.display();
    cout << endl;

    return 0;
}

