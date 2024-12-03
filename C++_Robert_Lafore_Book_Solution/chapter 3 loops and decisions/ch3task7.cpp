#include<iostream>
using namespace std;
int main()
{
/*7. Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent. Some interaction with the program might look like this:
Enter initial amount: 3000
Enter number of years: 10
Enter interest rate (percent per year): 5.5
At the end of 10 years, you will have 5124.43 dollars*
*/
int years;
float amt,intt,compound;
cout<<"Enter initial amount:"<<endl;
cin>>amt;
cout<<"Enter number of years:"<<endl;
cin>>years;
cout<<"Enter interest rate:"<<endl;
cin>>intt;
for(int i=0;i<years;i++){
	compound=amt+(amt*(intt/100));
   amt=compound;
}
	cout<<"At the end of "<<years<<" years, you will have "<<amt<<" dollars."<<endl;
	return 0;
}
