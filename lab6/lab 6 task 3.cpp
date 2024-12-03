#include<iostream>
#include<conio.h>
using namespace std;

struct att{
	string us;
	string ps;
	string uss;
	string pss;
	string st;
	string sts;
	char key;	
};

int main(){
	struct att x;
	cout<<"\t\t\tPress q to exit";
    while(x.key!='q'){
	cout<<"\n\tPress 1 if you are teacher and press 2 if you are student\n";
	x.key=getch();
	if(x.key=='1'){
		system("cls");
	
	cout<<"Enter name of student: ";
	cin>>x.st;
	
	
	  cout<<"Enter username for student: ";
	  cin>>x.us;
	  cout<<"Enter password for student: ";
	  cin>>x.ps;
  }

    
    
    if (x.key=='2')
    {
    	system("cls");
    	cout<<"Enter you name:";
    	cin>>x.sts;
     cout<<"Enter your username: ";
      cin>>x.uss;
	  cout<<"Enter your password: ";
	  cin>>x.pss;

     if(x.ps==x.pss&&x.us==x.uss&&x.st==x.sts)
     cout<<"\n\n\t\tYOU HAVE LOGED IN SUCCESSFULLY";
     else 
     cout<<"\n\n\t\tLOG IN UNSUCCESSFUL ";
	}
	}
	return 0;
}
