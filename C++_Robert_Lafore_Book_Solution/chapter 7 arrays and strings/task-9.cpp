#include <iostream>
#include <cstdlib> // For exit function
using namespace std;

class queue {
private:
    static const int MAX = 5;
    int arr[MAX];
    int head; 
    int tail; 

public:
    queue() : head(-1), tail(-1) {}

    void put(int data) {
    	
        if ((tail + 1) % MAX == head) {
            cout << "Queue is full. Cannot insert data. Program exiting." <<endl;
            exit(1);
        }

        if (head == -1) {
            head = 0;
        }

        tail = (tail + 1) % MAX;
        arr[tail] = data;
    }

    int get() {
        if (head == -1) {
           cout << "Queue is empty. Cannot retrieve data. Program exiting." <<endl;
            exit(1);
        }

        int data = arr[head];
        if (head == tail) {
          
            head = tail = -1;
        } else {
            head = (head + 1) % MAX;
        }

        return data;
    }
};

int main() {
    queue q;

    q.put(10);
    q.put(20);
    q.put(30);
 
    cout << "Data from the queue: " << q.get() <<endl;
    cout << "Data from the queue: " << q.get() <<endl;
    cout << "Data from the queue: " << q.get() <<endl;

    return 0;
}

