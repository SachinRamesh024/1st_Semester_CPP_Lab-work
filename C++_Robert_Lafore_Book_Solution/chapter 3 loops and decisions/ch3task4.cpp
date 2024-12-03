#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
/**4. Create the equivalent of a four-function calculator. The program should ask the user
to enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or 
dividing the two numbers. Use a switch statement to select the operation. Finally,
display theresult.
When it finishes the calculation, the program should ask whether the user wants to do
another calculation. The response can be ‘y’ or ‘n’. Some sample interaction with the
program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n*/
float x,y,ans;
char op;
start:
cout<<"Enter first Number:";
cin>>x;
cout<<"\nEnter operator:";
cin>>op;
cout<<"\nEnter second number:";
cin>>y;
switch(op){
	case '+':
		ans=x+y;
		break;
	case '-':
		ans=x-y;
		break;
	case '*':
		ans=x*y;
		break;
	case'/':
		ans=x/y;
		break;
    default:
    	ans=0;
    	break;}
    cout<<"\nAnswer:"<<ans;
    char input;
    cout<<"\nDo you want to continue(Y/N):";
    cin>>input;
	if(input=='Y'){
	goto start;}
	if(input=='N'){
		cout<<"Program ended.";
	}
	return 0;
	}
    
    
    
