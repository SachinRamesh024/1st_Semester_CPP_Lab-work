#include<iostream>
using namespace std;
struct time{
	int hours,mins,sec;
};
int main(){
	time t;
	char temp;
	long total;
cout<<"Enter a time value in hours, minutes, and seconds. This can be in 12:59:59 format:"<<endl;
cin>>t.hours>>temp>>t.mins>>temp>>t.sec;
total=t.hours*3600 + t.mins*60 + t.sec;
cout<<"\nTotal number of seconds:"<<total<<" seconds.";
}
