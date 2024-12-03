#include <iostream>
using namespace std;
int main() 
{
    int quantity;
    const int unitCost = 100; // Cost per unit
    double totalCost;

    cout << "Enter the quantity of items: ";
    cin >> quantity;

    totalCost = quantity * unitCost;

    if (totalCost > 1000)
	 {
        double discount = 0.10 * totalCost; 
        totalCost -= discount;
        cout << "Congratulations! You get a 10% discount." << endl;
     }
    cout << "Total cost: $" << totalCost <<endl;

    return 0;
}

