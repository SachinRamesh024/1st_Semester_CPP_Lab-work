#include<iostream>
using namespace std;
int main()
{
/*10. Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
years; use an integer value for the year.)*/
int years=0;
float rate,finamt,intamt;
cout<<"Enter initial amount:"<<endl;
cin>>intamt;
cout<<"Enter final amount:"<<endl;
cin>>finamt;
cout<<"Enter interest rate(percentage per year):"<<endl;
cin>>rate;
rate=rate/100;
while(finamt>=intamt){
	intamt=intamt+(intamt*rate);
	years++;
}
cout<<"At the end of "<<years<<" years, you will have "<<finamt<<" dollars."<<endl;	
	
	return 0;
}
