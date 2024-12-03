#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
/*8. Write a program that repeatedly asks the user to enter two money amounts expressed in
old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts
and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
user whether the program should be terminated. Typical interaction might be
Enter first amount: £5.10.6
Enter second amount: £3.2.6
Total is £8.13.0
Do you wish to continue (y/n)?
To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater
than 11, and carry 1 pound when there are more than 19 shillings*/
	int pound1,shilling1,pence1,pound2,shilling2,pence2,poundsum,shillingsum,pencesum;
	char c;
	do{
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
		poundsum=pound1+pound2;
		shillingsum=shilling1+shilling2;
		pencesum=pence1+pence2;
		
		if(pencesum>=12){
			shillingsum=shillingsum+(pencesum/12);
			pencesum=pencesum%12;
		}
		if(shillingsum>=20){
			poundsum=poundsum+(shillingsum/20);
			shillingsum=shillingsum%20;
		}
		cout<<"Total is:"<<endl;
		cout<<poundsum<<"."<<shillingsum<<"."<<pencesum<<"."<<endl;	
		cout<<"Do tou want to continue(Y/N:"<<endl;
		c=getch();}
		while(c=='y');
		return 0;
	
}
