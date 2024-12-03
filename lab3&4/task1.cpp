#include <iostream>
using namespace std;
int main() {
    int age;

    cout<< "Please enter your age: ";
    cin>> age;
    
    if (age >= 18)
	{
        cout<< "You are eligible to vote." << endl;
    } 
	else {
       cout<< "You are not eligible to vote yet." <<endl;
    }

    return 0;
}

