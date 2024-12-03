#include <iostream>
#include <cstdlib> // For exit function
using namespace std;

class matrix {
private:
    static const int MAX_ROWS = 10;
    static const int MAX_COLS = 10;
    int arr[MAX_ROWS][MAX_COLS];
    int numRows;
    int numCols;

public:
    matrix(int rows, int cols) : numRows(rows), numCols(cols) {
        if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
            cout << "Invalid dimensions. Program exiting." <<endl;
            exit(1);
        }
    }

    void putel(int row, int col, int value) {
        if (row < 0 || row >= numRows || col < 0 || col >= numCols) {
            cout << "Index out of bounds. Program exiting." <<endl;
            exit(1);
        }
        arr[row][col] = value;
    }

    int getel(int row, int col) const {
        if (row < 0 || row >= numRows || col < 0 || col >= numCols) {
            cout << "Index out of bounds. Program exiting." <<endl;
            exit(1);
        }
        return arr[row][col];
    }
};

int main() {
    matrix m1(3, 4);

    int temp = 12345;
    m1.putel(2, 3, temp);

    temp = m1.getel(2, 3);
    cout << "Value at position (2, 3): " << temp <<endl;


    return 0;
}

