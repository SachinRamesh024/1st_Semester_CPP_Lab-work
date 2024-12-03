#include <iostream>
using namespace std;

// Function to convert hours, minutes, and seconds to seconds
long hms_to_secs(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    char colon; // to store the ':' character
    int hours, minutes, seconds;

    // Loop to repeatedly obtain time values from the user
    while (true) {
        // Input from the user for time in hh:mm:ss format
        cout << "Enter time in hh:mm:ss format (or enter -1 to exit): ";
        cin >> hours >> colon >> minutes >> colon >> seconds;

        // Check for exit condition
        if (hours == -1) {
            cout << "Exiting the program.\n";
            break;
        }

        // Call the hms_to_secs function and display the result
        long totalSeconds = hms_to_secs(hours, minutes, seconds);
        cout << "Equivalent time in seconds: " << totalSeconds << " seconds\n";
    }

    return 0;
}

