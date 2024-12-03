#include<iostream>
using namespace std;
struct Students{
	int obt_marks;
	int total_marks;
};
int main(){
	Students s1;
	cout<<"Enter the obtained marks:";
	cin>>s1.obt_marks;
	cout<<"Enter total of marks:";
	cin>>s1.total_marks;
	
	float percentage=((float)s1.obt_marks/s1.total_marks)*100;
	cout<<"The percentage is "<<percentage<<"%";

	return 0;
}


