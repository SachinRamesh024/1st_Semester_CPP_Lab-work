#include<iostream>
using namespace std;
int main()
{
/*11. Create a three-function calculator for old-style English currency, where money amounts
are specified in pounds, shillings, and pence. (See Exercises 10 and 12 in Chapter 2.)
The calculator should allow the user to add or subtract two money amounts,
 or to multiply a money amount by a floating-point number. (It doesn’t make sense to multiply two
money amounts; there is no such thing as square money. We’ll ignore division. Use the
general style of the ordinary four-function calculator in Exercise 4 in this chapter.*/
int pound1,shilling1,pence1,pound2,shilling2,pence2,poundsum,shillingsum,pencesum;
	do{
	char op,c;
		cout<<"***Enter first amount***"<<endl;
		cout<<"Enter Pound:"<<endl;
		cin>>pound1;
		cout<<"Enter Shilling:"<<endl;
		cin>>shilling1;
		cout<<"Enter Pence:"<<endl;
		cin>>pence1;
		
		cout<<"***Enter second amount***"<<endl;
		cout<<"Enter Pound:"<<endl;
		cin>>pound2;
		cout<<"Enter Shilling:"<<endl;
		cin>>shilling2;
		cout<<"Enter Pence:"<<endl;
		cin>>pence2;
	cout<<"Enter operation(+,-,*):"<<endl;
	cin>>op;
switch(op){
			case '+':
				pound1 += pound2;
				shilling1 += shilling2;
				pence1 += pence2;
				break;
			case '-':
				pound1 -= pound2;
				shilling1 -= shilling2;
				pence1 -= pence2;
				break;
			case '*':
				pound1 *= pound2;
				shilling1 *= shilling2;
				pence1 *= pence2;
				break;	
			default:
				cout << "Invalid option" << endl;
				break;	
		if(pence1 > 11){
			shilling1 += (pence1/12);
			pence1 = pence1%12;
		}
		if(shilling1 > 19){
			pound1 += (shilling1/20);
			shilling1 = shilling1%20;
		}
		cout << "Amount after performing " << op << " is £" << pound1 << "." << shilling1 << "." << pence1 << endl; 
		cout << "Do you want to continue (y/n): ";
		cin >>c;
	}while(c == 'y');
	}















