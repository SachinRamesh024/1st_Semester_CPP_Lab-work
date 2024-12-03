#include<iostream>
#include<conio.h>
using namespace std;

struct date{
   string dateform1="13-02-2023";
   string dateform2="02-13-2023";
   string dateform3="2023-02-13";
	
};

int main()
{
	date d;
	
	char key;
	char key1;
	key=getch();
	
	while(key1!='n' ||key1=='y')
{
	cout<<"Select Date Formate\n";
	cout<<"1: DD-MM-YYYY\n";
	cout<<"2: MM-DD-YYYY\n";
	cout<<"3: YYYY-MM-DD\n";
	
	key=getch();
	if(key=='1')
	{
	     cout<<"Date Formate DD-MM-YYYY is selected : ";cout<<d.dateform1;
	     cout<<" \n continue for next selection (y/n)";cin>>key1;
           }
	
	if(key=='2')
	{
	     cout<<"Date Formate MM-DD-YYYY is selected : ";cout<<d.dateform2;
	     cout<<" \n continue for next selection (y/n)";cin>>key1;
	       }
	if(key=='3')
	{
		cout<<"Date Formate MM-DD-YYYY is selected : ";cout<<d.dateform3;
		cout<<" \n continue for next selection (y/n)";cin>>key1;
				}
				else 
			;}
	return 0;
}
