#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	/*5. A library function, islower(), takes a single character (a letter) as an argument and
returns a nonzero integer if the letter is lowercase, or zero if it is uppercase. This func-
tion requires the header file CTYPE.H. Write a program that allows the user to enter a let-
ter, and then displays either zero or nonzero, depending on whether a lowercase or
uppercase letter was entered.*/
	char c;
	cout<<"Enter a character:";
	cin>>c;
	cout<<islower(c);
	return 0;
} 

