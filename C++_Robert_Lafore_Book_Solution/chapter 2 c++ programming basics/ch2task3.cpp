#include<iostream>
using namespace std;
int main()
{
/*3.Write a program that generates the following output:
10
20
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
and a decrement operator to generate the 19.*/
int num= 10;
cout<<num;
num*=2;
cout<<"\n"<<num;
cout<<"\n"<<--num;
return 0;
}

