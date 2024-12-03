#include<iostream>
using namespace std;
int main()
{
/*6. Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
calculates its factorial, until the user enters 0, at which point it terminates. You can
enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
effect.*/
int num=0;
do{
	int fact =1;	
    cout<<"Enter any number or 0 to exit:";
    cin>>num;
    for(int j=num;j>0;j--)
    fact*=j;
     cout<<"Factorial of number is:"<<fact<<endl;
  }while(num!=0);
  return 0;}
