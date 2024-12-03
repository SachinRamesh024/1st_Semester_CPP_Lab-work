#include<iostream>
using namespace std;
int main()
{
	/*7. You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point num-
ber representing degrees Celsius, and then displays the corresponding degrees
Fahrenheit.*/
	float ctemp;
	cout<<"Enter temperature in celsius:";
	cin>>ctemp;
	float ftemp=ctemp*9/5+32;
	cout<<"Temperature in fahrenheit:"<<ftemp <<"F";
	return 0;
} 

