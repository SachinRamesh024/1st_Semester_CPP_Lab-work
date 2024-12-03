#include<iostream>
using namespace std;
struct phone{
	int area;
	int exchange;
	int num;
};
int main()
{
	phone p1={212,767,8900};
	phone p2;
	cout<<"Enter your area code,exchange and number: ";
	cin>>p2.area>>p2.exchange>>p2.num;
	cout<<"My Number: ";
	cout<<"( "<<p1.area<<" ) "<<p1.exchange<<" - "<<p1.num;
	cout<<"\nYour Number: ";
	cout<<"( "<<p2.area<<" ) "<<p2.exchange<<" - "<<p2.num;
	return 0;
}
