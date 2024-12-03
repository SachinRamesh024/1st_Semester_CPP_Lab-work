#include <iostream>
#include <string>

using namespace std;

enum DiskType { CD, DVD };

class Sales {
protected:
    float sales[3];

public:
    void getData() {
        cout << "Enter sales for the last three months:\n";
        for (int i = 0; i < 3; ++i) {
            cout << "Month " << i + 1 << ": $";
            cin >> sales[i];
        }
    }

    void putData() const {
        cout << "Sales for the last three months: $";
        for (int i = 0; i < 3; ++i) {
            cout << sales[i] << " ";
        }
        cout << endl;
    }
};

class Publication {
protected:
    string title;
    float price;

public:
    void getData() {
        cout << "Enter title: ";
        cin.ignore(); // Clear input buffer
        getline(cin, title);
        cout << "Enter price: $";
        cin >> price;
    }

    void putData() const {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

class Book : public Publication, public Sales {
private:
    int pageCount;

public:
    void getData() {
        Publication::getData(); // Call the base class function
        Sales::getData(); // Call the Sales class function
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putData() const {
        Publication::putData(); // Call the base class function
        Sales::putData(); // Call the Sales class function
        cout << "Page Count: " << pageCount << " pages" << endl;
    }
};

class Tape : public Publication, public Sales {
private:
    float playingTime;

public:
    void getData() {
        Publication::getData(); // Call the base class function
        Sales::getData(); // Call the Sales class function
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }

    void putData() const {
        Publication::putData(); // Call the base class function
        Sales::putData(); // Call the Sales class function
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

class Disk : public Publication, public Sales {
private:
    DiskType diskType;

public:
    void getData() {
        Publication::getData(); // Call the base class function
        Sales::getData(); // Call the Sales class function
        cout << "Enter disk type (c for CD, d for DVD): ";
        char type;
        cin >> type;
        diskType = (type == 'c' || type == 'C') ? CD : DVD;
    }

    void putData() const {
        Publication::putData(); // Call the base class function
        Sales::putData(); // Call the Sales class function
        cout << "Disk Type: " << (diskType == CD ? "CD" : "DVD") << endl;
    }
};

int main() {
    Book book;
    Tape tape;
    Disk disk;

    cout << "Enter Book Details:\n";
    book.getData();

    cout << "\nEnter Tape Details:\n";
    tape.getData();

    cout << "\nEnter Disk Details:\n";
    disk.getData();

    cout << "\nBook Information:\n";
    book.putData();

    cout << "\nTape Information:\n";
    tape.putData();

    cout << "\nDisk Information:\n";
    disk.putData();

    return 0;
}

