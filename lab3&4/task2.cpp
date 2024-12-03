#include <iostream>
using namespace std;
int main()
 {
    int classes_held, total_classes;

    cout<< "Enter the number of classes held: ";
    cin>>classes_held;

    cout<< "Enter the total number of classes: ";
    cin>>total_classes;

float attendance = (classes_held) / (total_classes) * 100;

 if (attendance >= 75.0)
  {
        cout <<"You are allowed to sit in the exam. ";
    }
	 else {
        cout <<"You are not allowed to sit in the exam. ";
    }
return 0;
}

