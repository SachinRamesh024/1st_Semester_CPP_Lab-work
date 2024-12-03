#include <iostream>
using namespace std;
int main()
 {
    int number = 5; 

    cout<< "Multiplication table of " << number << ":" << endl;

    for (int i = 1; i <= 15; ++i)
	 {
        int result = number * i;
        cout<< i << " * " << number << " = " << result << endl;
    }

    return 0;
}

