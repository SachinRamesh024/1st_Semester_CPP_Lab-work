#include <iostream>
#include <string>
using namespace std;
int main() {
    // Student information
    string studentName = "Sachin";
    int totalMarks = 475;
    float percentage = 87.5;
    char grade = 'A';
    bool pass = true;
    short numberOfSubjects = 5;
    long totalEnrollment = 100;
    long long studentID = 024 ;

    // Display student information
    cout << "Student Name: " << studentName << endl;
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Pass: " << (pass ? "Yes" : "No") << endl;
    cout << "Number of Subjects: " << numberOfSubjects << endl;
    cout << "Total Enrollment: " << totalEnrollment << endl;
    cout << "Student ID: " << studentID << endl;

    return 0;
}

