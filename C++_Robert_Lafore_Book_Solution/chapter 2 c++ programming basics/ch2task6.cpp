#include<iostream>
using namespace std;
int main()
{
/*6. On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.*/
float dollar,pound=1.487,franc= 0.172,
dmark= 0.584,yen=0.00955;
cout<<"Enter amount in dollar:";
cin>>dollar;
cout<<"British pound="<<dollar/pound;
cout<<"\nFrench franc="<<dollar/franc;
cout<<"\nGerman deutschemark="<<dollar/dmark;
cout<<"\nJapenese yen="<<dollar/yen;
	return 0;
} 

