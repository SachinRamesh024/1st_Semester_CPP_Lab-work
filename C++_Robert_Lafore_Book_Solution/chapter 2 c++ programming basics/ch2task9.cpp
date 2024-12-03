#include<iostream>
using namespace std;
int main()
{/*9. If you have two fractions, a/b and c/d, their sum can be obtained from the formula
a c a*d + b*c
--- + --- = -----------
b d b*d
For example, 1/4 plus 2/3 is
1 2 1*3 + 4*2 3 + 8 11
--- + --- = ----------- = ------- = ----
4 3 4*3 12 12
Write a program that encourages the user to enter two fractions, and then displays their
sum in fractional form.*/
	int a,b,c,d,sum1,sum2;
	char div;
	cout<<"Enter the first fraction:";
	cin>>a>>div>>b;
	cout<<"Enter the second fraction:";
	cin>>c>>div>>d;
	sum1=(a*d)+(b*c);
	sum2=(b*d);
	cout<<sum1<<"/"<<sum2;
	return 0;
} 

