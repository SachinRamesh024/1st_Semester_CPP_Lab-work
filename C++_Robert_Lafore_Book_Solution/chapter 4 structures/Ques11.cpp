#include<iostream>
using namespace std;
struct time{
    int hours, mins, secs;
};
int main(){
    time t1, t2, t3;
    char temp;
    cout << "Enter first time in format (12:59:59): ";
    cin >> t1.hours >> temp >> t1.mins >> temp >> t1.secs;
    cout << "Enter second time in format (12:59:59): ";
    cin >> t2.hours >> temp >> t2.mins >> temp >> t2.secs;
    int total_secs1 = t1.hours * 3600 + t1.mins * 60 + t1.secs;
    int total_secs2 = t2.hours * 3600 + t2.mins * 60 + t2.secs;
    int total_secs = total_secs1 + total_secs2;
    t3.hours = total_secs/3600;
    t3.mins = t3.hours%3600;
    t3.secs = total_secs%60;
    cout << "Addition of above input time is: " << t3.hours << ":" << t3.mins << ":" << t3.secs << endl;
    return 0;
}
