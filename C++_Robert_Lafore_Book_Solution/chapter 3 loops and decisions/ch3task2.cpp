#include<iostream>
using namespace std;
int main()
{
/**2. Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use 
floating-point numbers. Interaction with the program might look like this:
Type 1 to convert Fahrenheit to Celsius,
2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111*/
float ctemp;
float tempf;
float ftemp;
float tempc;
char input;
cout<<"Select (C/F):";
cin>>input;
if(input=='C'){
	cout<<"Enter temperature in Celsius:";
	cin>>ctemp;
	tempf=(float)(ctemp*9/5)+32;
	cout<<"Temperature in Fahrenheit:"<<(float)tempf;
}
if(input=='F'){
	cout<<"Enter temperature in Fahrenheit:";
	cin>>ftemp;
	tempc=(float)(ftemp-32)*5/9;
	cout<<"Temperature in Celsius:"<<tempc;
}	
return 0;
}
