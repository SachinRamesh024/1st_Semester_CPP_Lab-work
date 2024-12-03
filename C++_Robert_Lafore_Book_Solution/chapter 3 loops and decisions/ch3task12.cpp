#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
/*12. Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
applied to fractions:
Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*d) / (b*c)
The user should type the first fraction, an operator, and a second fraction. The program
should then display the result and ask whether the user wants to continue. */
	start: 
	int p,q,r,s,num1,num;
	char o,div;
	cout<<"Enter first fraction:"<<endl;
	cin>>p>>div>>q;
	cout<<"Enter operator:"<<endl;
	cin>>o;
	cout<<"Enter second fraction:"<<endl;
	cin>>r>>div>>s; 
	switch(o){
		case'+':
			num=(p*s+q*r);
			num1=(q*s);
			cout<<"Sum="<<num<<"/"<<num1<<endl;
			break;
		case'-':
			num=(p*s-q*r);
			num1=(q*s);
			cout<<"Difference="<<num<<"/"<<num1<<endl;
			break;
		case'*':
			num=(p*r);
			num1=(q*s);
			cout<<"Product="<<num<<"/"<<num1<<endl;
			break;
		case'/':
				num=(p*r);
				num1=(q*s);
			cout<<"Division is:"<<num<<"/"<<num1<<endl;
			break;
	}
	{char input;
	cout<<"Continue progarm(y/n):";
	cin>>input;
    if(input=='y'){
	goto start;}
	if(input=='n'){
		cout<<"Program ended.";
	}
	return 0;
	}
}
