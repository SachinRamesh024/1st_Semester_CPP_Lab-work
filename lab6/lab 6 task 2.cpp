#include<iostream>
#include<conio.h>
using namespace std;
struct pat{
	string time=" 12 pm ";
	string date=" 13-10-2023 ";
	string time1=" 12 am ";
	string name;
	string dname;
	char key;
	string ps;
	string us;
};

int main()
{
	string y;
	struct pat x;
	cout<<"Enter your Username: ";getline(cin,x.us);
	cout<<"Enter your password: ";cin>>x.ps;
	system("cls");
	cout<<"   \t\tYou have loged in successfully\n\n";
	
	if(x.us=="siraj ansari" && x.ps=="123456"){
	
	cout<<"Enter name: ";cin>>x.name;
	cout<<"Enter doctor's name you want appointment of: ";cin>>x.dname;
	cout<<"\n\nAre you free at day or night (d/n)";

	x.key=getch();

	if(x.key=='d')
	cout<<"\nTime for your appointment is : "<<x.time<<","<<x.date;
	else if(x.key=='n')
	cout<<"\nTime for your appointment is : "<<x.time1<<","<<x.date;
}
     else 
     cout<<"\n\n    password and usurname do not match. ";
	
	
	return 0;
}
