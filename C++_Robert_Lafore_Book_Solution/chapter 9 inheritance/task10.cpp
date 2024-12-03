#include <iostream>
using namespace std;

const int LEN = 80; // maximum length of names

class employee; // Forward declaration for employee class
class student;  // Forward declaration for student class
class manager;  // Forward declaration for manager class
class scientist; // Forward declaration for scientist class
class executive; // Forward declaration for executive class

class student // educational background
{
private:
    char school[LEN]; // name of school or university
    char degree[LEN]; // highest degree earned

public:
    void getedu();
    void putedu() const;
};

class employee
{
private:
    char name[LEN];       // employee name
    unsigned long number; // employee number

public:
    void getdata();
    void putdata() const;
};

class manager : private employee, private student // management
{
private:
    char title[LEN]; // "vice-president" etc.
    double dues;     // golf club dues

public:
    void getdata();
    void putdata() const;
};

class scientist : private employee, private student // scientist
{
private:
    int pubs; // number of publications

public:
    void getdata();
    void putdata() const;
};

class laborer : public employee // laborer
{
};

class executive : public manager
{
private:
    double yearlyBonus; // size of yearly bonus
    int stockOptions;   // number of shares of company stock

public:
    void getdata();
    void putdata() const;
};

int main()
{
    manager m1;
    scientist s1, s2;
    laborer l1;
    executive e1;

    cout << "\nEnter data for manager 1"; // get data for several employees
    m1.getdata();

    cout << "\nEnter data for scientist 1";
    s1.getdata();

    cout << "\nEnter data for scientist 2";
    s2.getdata();

    cout << "\nEnter data for laborer 1";
    l1.getdata();

    cout << "\nEnter data for executive 1";
    e1.getdata();

    cout << "\nData on manager 1"; // display data for several employees
    m1.putdata();

    cout << "\nData on scientist 1";
    s1.putdata();

    cout << "\nData on scientist 2";
    s2.putdata();

    cout << "\nData on laborer 1";
    l1.putdata();

    cout << "\nData on executive 1";
    e1.putdata();

    cout << endl;
    return 0;
}

// Implement member functions for employee class
void employee::getdata()
{
    cout << "\nEnter last name: ";
    cin >> name;
    cout << "Enter number: ";
    cin >> number;
}

void employee::putdata() const
{
    cout << "\nName: " << name;
    cout << "\nNumber: " << number;
}

// Implement member functions for student class
void student::getedu()
{
    cout << "Enter name of school or university: ";
    cin >> school;
    cout << "Enter highest degree earned \n";
    cout << "(Highschool, Bachelor’s, Master’s, PhD): ";
    cin >> degree;
}

void student::putedu() const
{
    cout << "\nSchool or university: " << school;
    cout << "\nHighest degree earned: " << degree;
}

// Implement member functions for manager class
void manager::getdata()
{
    employee::getdata();
    cout << "Enter title: ";
    cin >> title;
    cout << "Enter golf club dues: ";
    cin >> dues;
    student::getedu();
}

void manager::putdata() const
{
    employee::putdata();
    cout << "\nTitle: " << title;
    cout << "\nGolf club dues: " << dues;
    student::putedu();
}

// Implement member functions for scientist class
void scientist::getdata()
{
    employee::getdata();
    cout << "Enter number of pubs: ";
    cin >> pubs;
    student::getedu();
}

void scientist::putdata() const
{
    employee::putdata();
    cout << "\nNumber of publications: " << pubs;
    student::putedu();
}

// Implement member functions for executive class
void executive::getdata()
{
    manager::getdata();
    cout << "Enter size of yearly bonus: ";
    cin >> yearlyBonus;
    cout << "Enter number of shares in stock-option plan: ";
    cin >> stockOptions;
}

void executive::putdata() const
{
    manager::putdata();
    cout << "\nYearly Bonus: $" << yearlyBonus;
    cout << "\nStock Options: " << stockOptions << " shares";
}

