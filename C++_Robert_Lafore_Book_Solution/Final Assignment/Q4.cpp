#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
	
    void getData() {
    	cout<<"Enter Name: ";
		cin>>name;	
		cout<<"Enter Age: ";    
    	cin>>age;
	}

    void displayData(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    float calculateBonus(){
        return 0.0;
    }
};

class Admin : public Person {
private:
    float salary;

public:

    void getData() {
        Person::getData(); 
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData(){
        Person::displayData(); 
        cout << "Salary: " << salary << endl;
    }


    float calculateBonus() {
        return 0.1 * salary;
    }
};

class Salesman : public Person {
private:
    float sales;

public:

    void getData(){
        Person::getData(); 
        cout << "Enter total sales: ";
        cin >> sales;
    }

    void displayData(){
        Person::displayData(); 
        cout << "Total Sales: " << sales << endl;
    }

    float calculateBonus(){
        return 0.02 * sales;
    }
};

int main() {
   
   	
    Admin adminEmployee;
    Salesman salesmanEmployee;
    
    cout << "Enter information for Admin Employee:" << endl;
    adminEmployee.getData();
    cout << "\nAdmin Employee Information:" << endl;
    adminEmployee.displayData();
    cout << "Bonus: " << adminEmployee.calculateBonus() << endl;

   	cout << "\n------------------------\n" << endl;
 	cout << "\n------------------------\n" << endl;
	
    cout << "Enter information for Salesman Employee:" << endl;
    salesmanEmployee.getData();
    cout << "\nSalesman Employee Information:" << endl;
    salesmanEmployee.displayData();
    cout << "Bonus: " << salesmanEmployee.calculateBonus() << endl;

    return 0;
}
