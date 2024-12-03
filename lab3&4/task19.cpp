#include <iostream>
using namespace std;
int main() 
{
    int cppMarks, dsMarks, osMarks;
    double totalMarks, percentage;

    cout << "Enter marks obtained in C++: ";
    cin >> cppMarks;

    cout << "Enter marks obtained in Data Structures: ";
    cin >> dsMarks;

    cout << "Enter marks obtained in Operating Systems: ";
    cin >> osMarks;

    totalMarks = cppMarks + dsMarks + osMarks;
    percentage = (totalMarks / 300.0) * 100.0;

    cout << "Total marks obtained: " << totalMarks << "/300" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
 
    if (percentage >= 90.0)
	 {  cout << "Grade: A" << endl; }
	  else if (percentage >= 80.0)
	 {  cout << "Grade: B" << endl;  } 
	 else if (percentage >= 70.0) 
	 {  cout << "Grade: C" << endl;}
	  else if (percentage >= 60.0)
	   { cout << "Grade: D" << endl;}
	    
	   else { cout << "Grade: FAIL" << endl;
    }

    return 0;
}

