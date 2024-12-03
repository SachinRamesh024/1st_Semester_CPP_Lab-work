#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	/*8. When a value is smaller than a field specified with setw(), the unused locations are, by
default, filled in with spaces. The manipulator setfill() takes a single character as an
argument and causes this character to be substituted for spaces in the empty parts of a
field. Rewrite the WIDTH program so that the characters on each line between the location
name and the population number are filled in with periods instead of spaces, as in
Portcity.....24*/
cout<<"1990"<<setfill('-')<<setw(8)<<"135"
    <<"\n1991"<<setfill('-')<<setw(8)<<"7290"
    <<"\n1992"<<setfill('-')<<setw(8)<<"11300"
    <<"\n1993"<<setfill('-')<<setw(8)<<"16200";
	return 0;
} 

