#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    Student(int roll,string studentName, float studentMarks){
        rollNumber=roll;
		name=studentName; 
		marks=studentMarks;
	}

    void displayInfo(){
        cout << "------------------------" << endl;
		cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    const int numberOfStudents = 20;

    Student students[numberOfStudents] = {
        {03, "Faraz", 85.5}, {06, "ahmed", 92.0}, {9, "Ahsan", 78.5}, {12, "abdullah", 92.0},
    	{15, "jibraan", 92.0}, {18, "Hassan", 92.0}, {21, "Ibad", 92.0}, {24, "Sachin", 92.0},
		{28, "Manan", 92.0}, {31, "Diljeet", 92.0}, {35, "Basit", 92.0}, {39, "nadeem", 92.0},
		{42, "Ali khan", 92.0}, {48, "Husnaak", 92.0}, {51, "mustafa", 92.0}, {54, "abbas", 92.0},
		{66, "raza", 92.0}, {69, "raza", 92.0}, {72, "aayan", 92.0}, {74, "karan", 92.0},
	
	};

    for (int i = 0; i < numberOfStudents; ++i) {
      	cout << "Student " << i + 1 << " Information:" << endl;
        students[i].displayInfo();
    }
    
    return 0;
}
