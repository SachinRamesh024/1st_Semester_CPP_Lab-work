#include<iostream>
#include<conio.h>
using namespace std;

struct lg{
	string ps;
	string us;
 	int c=0;
 	char key;
 	int p;
};



int main(){
struct lg x;

while(x.c<6){
	cout<<"Enter Username: ";
	cin>>x.us;cout<<"\t\t\t\tPress f if you forgot password: ";cin>>x.key;
	if(x.key!='f'){
	
	cout<<"Enter Password: ";
	cin>>x.ps;
	
	if(x.ps=="123"&&x.us=="abc"){
		cout<<"\n\n\t\t\t\t\t\t\tWELCOME";
	    exit(0);
	}
	else 
	{
		++x.c;
		cout<<"try again";
	}
	
	
     }
     else 
    {
	 cout<<"Enter your number: ";
     cin>>x.p;
     if(x.p==123456){
     	cout<<"\t\t\t\t\t\tWELCOME";
     	exit(0);
	 }
	 else {
	 	++x.c;
		cout<<"try again";
}
	}

}




  }


