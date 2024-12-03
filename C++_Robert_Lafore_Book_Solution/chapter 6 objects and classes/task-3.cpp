#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void display() const {
        cout<<hours << ":" << minutes << ":" << seconds;
    }

    Time add(const Time& t1, const Time& t2) const {
        Time result;
        result.seconds = t1.seconds + t2.seconds;
        result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
        result.hours = t1.hours + t2.hours + result.minutes / 60;

        result.seconds %= 60;
        result.minutes %= 60;

        return result;
    }
};

int main() {
  
    const Time time1(10, 30, 45);
    const Time time2(4, 15, 30);
    Time time3;

    time3 = time3.add(time1, time2);

    cout << "Result: ";
    time3.display();
    cout <<endl;

    return 0;
}

