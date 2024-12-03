#include<iostream>
using namespace std;
struct fraction{
	int num,den;
};
int main()
{
	char temp;
	fraction n1,n2,n3;
cout<<"Enter first fraction:"<<endl;
cin>>n1.num>>temp>>n1.den;
cout<<"Enter second fraction:"<<endl;
cin>>n2.num>>temp>>n2.den;
n3.num=n1.num*n2.den+n1.den*n2.num;
n3.den=n1.den*n2.den;
cout<<"Addition is:"<<n3.num<<"/"<<n3.den;	
}
