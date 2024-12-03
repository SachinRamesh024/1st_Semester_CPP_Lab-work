#include<iostream>
using namespace std;
int main()
{
	/*1. Assuming there are 7.481 gallons in a cubic foot,
	write a program that asks the user to enter a number of gallons,
	and then displays the equivalent in cubic feet.*/
	int gallons;
	int x=7.481;
	cout<<"Enter number of gallons:";
	cin>>gallons;
	cout<<"Number of gallons in a cubic feet is:"<<(float)gallons/x;
	return 0;
} 

