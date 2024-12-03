#include<iostream>
#include<conio.h>
using namespace std;

struct mn{
	int qty;
	char key;
	int cn=0;
};

int main(){
	struct mn x;
	cout<<"\t\t\tMENU CARD";
	cout<<"\n1. BURGER (100 RS)";
	cout<<"\n2. BIRYANI (90 RS)";
	cout<<"\n3. ROLL (110 RS)";
	cout<<"\n4. OTHERS (120 RS)";
	x.key=getch();
	
	while(x.key=='1' &&x.key!='q' )
	{
	     cout<<"\nENTER QUANTITY: ";cin>>x.qty;
	     cout<<"\nPRICE: "<<x.qty*100;

        x.key=getch();}
        while(x.key=='2'  )
		{
			 cout<<"\nENTER QUANTITY: ";cin>>x.qty;
	         cout<<"\nPRICE: "<<x.qty*90;
	         
	          x.key=getch();}
              while(x.key=='3'  )
			  {
              	 cout<<"\nENTER QUANTITY: ";cin>>x.qty;
	             cout<<"\nPRICE: "<<x.qty*110;
			  
			      x.key=getch();}
                  while(x.key=='4'  )
				  {
              	  cout<<"\nENTER QUANTITY: ";cin>>x.qty;
	             cout<<"\nPRICE: "<<x.qty*120;
	             
	             x.key=getch();
			    }
			  
			  
			  
			
			
			
			
	
	
	
	
	
	return 0;
}
