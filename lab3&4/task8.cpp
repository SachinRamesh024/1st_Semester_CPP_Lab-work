#include<iostream>
using namespace std;
int main () 
{ 
 int i=3; 
 i++;
 
 cout<<i<<endl; //4
 i++;  
 
 cout<<i<<endl; //5
 
 cout<<++i<<endl; //6  /* here pre-increment is used which incements i before printing it*/
 
 cout<<i++<<endl; //6  // here post-increment is used which first prints the previous value of i
                      //  which is equal to 6 and then increments the value.
   
 cout<<i;   //7
 
 
 return 0;
  }
