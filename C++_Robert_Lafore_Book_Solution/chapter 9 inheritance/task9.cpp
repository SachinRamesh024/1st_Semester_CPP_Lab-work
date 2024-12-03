#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    void getDate() {
        cout << "Enter publication date (MM DD YYYY): ";
        cin >> month >> day >> year;
    }

    void putDate() const {
        cout << "Publication Date: " << month << "/" << day << "/" << year << endl;
    }
};

class Publication2 {
protected:
    string title;
    float price;
    Date publicationDate;

public:
    void getData() {
        cout << "Enter title: ";
        cin.ignore(); // Clear input buffer
        getline(cin, title);
        cout << "Enter price: $";
        cin >> price;
        publicationDate.getDate();
    }

    void putData() const {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
        publicationDate.putDate();
    }
};

class Book : public Publication2 {
private:
    int pageCount;

public:
    void getData() {
        Publication2::getData(); // Call the base class function
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putData() const {
        Publication2::putData(); // Call the base class function
        cout << "Page Count: " << pageCount << " pages" << endl;
    }
};

class Tape : public Publication2 {
private:
    float playingTime;

public:
    void getData() {
        Publication2::getData(); // Call the base class function
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }

    void putData() const {
        Publication2::putData(); // Call the base class function
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    Book book;
    Tape tape;

    cout << "Enter Book Details:\n";
    book.getData();

    cout << "\nEnter Tape Details:\n";
    tape.getData();

    cout << "\nBook Information:\n";
    book.putData();

    cout << "\nTape Information:\n";
    tape.putData();

    return 0;
}

