#include <iostream>
using namespace std;
int main()
 {
    int sum = 0;

    for (int i=1; i<=100 ; ++i) 
	{
        sum += i;
    }

    double average = sum / 100.0;

    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl;

    return 0;
}

