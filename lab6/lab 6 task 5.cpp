#include<iostream>
#include<conio.h>
using namespace std;


struct  mc{
     int key;
     int x;
     int t=0;
     int r=0;
     int w=0;
};

int main(){
	struct mc x;
	
	system("pause");
    system("cls");
	cout<<"a,b,c,___:\n\n"
	    <<"1: d\n"
	    <<"2: c\n"
	    <<"3: b\n"
	    <<"2: a \n";
	    

	   x.key=getch();

	   	   
	   if(x.key=='1'){
	   	cout<<"correct answer";
	   	++x.t;
	   	++x.r;
	   }
	   else{
	   cout<<"wrong answer";
	   ++x.t;
	   ++x.w;}
	   system("cls");

	cout<<"\n\n4,3,2,___:\n\n"
	    <<"1: 4\n"
	    <<"2: 3\n"
	    <<"3: 2\n"
	    <<"4: 1 \n";
	    

	   x.key=getch();
	   

	   	   if(x.key=='4'){
	   	cout<<"correct answer";
	   	++x.t;
	   	++x.r;
	   }
	   else{
	   cout<<"wrong answer";
        ++x.t;
        ++x.w;}
       system("cls");
	    
	cout<<"\n\napple,orange,mango,___:\n\n"
	    <<"1: pineapple\n"
	    <<"2: tomato\n"
	    <<"3: vegetable\n"
	    <<"2: honey \n";
	    

	   x.key=getch();

	   	   
	   if(x.key=='1'){
	   	cout<<"correct answer";
	   ++x.t;
	   ++x.r;
	   }
	   else{
	   cout<<"wrong answer";
	   ++x.t;
	   ++x.w;}
      system("cls");
      
	cout<<"\n\nthe fourth letter of english is ?:\n\n"
	    <<"1: d\n"
	    <<"2: c\n"
	    <<"3: b\n"
	    <<"2: a \n";
	    

	   x.key=getch();

	   
	   if(x.key=='1'){
	   	cout<<"correct answer";
	   ++x.t;
	   ++x.r;
	   }
	   else{
	   cout<<"wrong answer";
       ++x.t;
       ++x.w;}
	   system("cls");
	   

	   
	   cout<<"\n\n\tTOTAL: "<<x.t;
	   cout<<"\nRIGHT: "<<x.r;
	   cout<<"\nWRONG: "<<x.w;
	   
	   
	   
	   
	   

return 0;
}
