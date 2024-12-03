#include<iostream>
using namespace std;
struct fraction{
	int num, den;
};
int main(){
	char ch;
    fraction num1, num2, num3;
	do{
		char temp, option;
		cout << "Enter first fraction, operator, second fraction:  ";
	    cin >> num1.num >> temp >> num1.den >> option >> num2.num >> temp >> num2.den;
		switch(option){
			case '+':
				num3.num = num1.num * num2.den + num1.den * num2.num;
				num3.den = num1.den * num2.den;
				cout << "Sum is: " << num3.num << "/" << num3.den;
				break;
			case '-':
				num3.num = num1.num * num2.den - num1.den * num2.num;
				num3.den = num1.den * num2.den;
				cout << "Difference: " << num3.num << "/" << num3.den;
				break;
			case '*':
				num3.num = num1.num * num2.num;
				num3.den = num1.den * num2.den;
				cout << "Multiplication is: " << num3.num << "/" << num3.den;
				break;
			case '/':
				num3.num = num1.num * num2.den;
				num3.den = num1.den * num2.num;
				cout << "Division is: " << num3.num << "/" << num3.den;
				break;
			default:
				cout << "Invalid option";
				break;
		}
		cout << "\nDo you want to continue (y/n): ";
		cin >> ch;
	}while(ch == 'y');
	return 0;
}
