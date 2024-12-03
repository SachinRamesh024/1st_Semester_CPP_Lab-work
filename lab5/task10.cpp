#include<iostream>
using namespace std;
int main()
{ 
//What do the loops below do?

//Loop 1                       
for(int i = 0; i<20; i++){      //This loop iterates from 0 to 19(inclusive) and prints double of even number within 
if(i % 2 == 0)                 // that range.so, it will print even numbersfrom 20 down to 2.
{  cout<<(i*2) <<endl; }             
	}
	
	
//Loop 2
for(int i = 20; i > 0 ; i-- ){    //this loop iterates from 20 down to 1(inclusive) and prints even numbers in
if(i % 2 == 0)                   //descending order within that range. so, it will print even numbers from
{  cout<<i <<endl; }           // 20 down to 2.
    } 


//Loop 3
int mysteryInt = 100;             // this loop subtracts the value of 'i'(which starts at 5 and goes down to 1) from
	for(int i=5; i>0 ;i-- )      //'mysteryint'which starts at 100.it then prints the updated value of 'mysteryint'
{                               // in each iteration. so it will print 9592929189.
	mysteryInt -= i;
	cout<<(mysteryInt)<<endl;
}
 

//Loop 4
for(int i=5; i>0 ;i-- )     //this loop is similiar to previous one but it re-declares 'mysteryint' inside the
{                          //loop.as a result 9595959595,as 'mysteryint' is re-initialized to 100 in each iteration 
	int mysteryInt = 100;
	mysteryInt -= i;
    cout<<(mysteryInt)<<endl;
}


//Loop 5: a while loop      //This while loop multiplies 'mysteryInt' by 'counter', which starts at 1 and increment
/*int mysteryInt = 1;		   //print 6 because mysteryInt is multiplied by 1, then by 2, which equals 6 when the 
int counter=1;		      //loop exits.
  while(mysteryInt<3)
{
  mysteryInt=mysteryInt * counter;
  counter++;
}       
 cout<< (mysteryInt); */
		
}
  
