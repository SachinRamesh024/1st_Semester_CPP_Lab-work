#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
/*11. By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation
means.) Use this manipulator, along with setw(), to help generate the following output:
Last name First name Street address Town State
------------------------------------------------------------
Jones Bernard 109 Pine Lane Littletown MI
O’Brian Coleen 42 E. 99th Ave. Bigcity NY
Wong Harry 121-A Alabama St. Lakeville IL*/
	
	cout<<setiosflags(ios::left)<<setw(12)<<"Last Name"<<setw(13)<<"First Name"<<setw(18) <<"Street address"<<setw(12)<<"Town"<<setw(5)<<"State"<<endl;

    cout<<setiosflags(ios::left)<<setfill('-')<<setw(12)<<""<<setw(13)<<""<<setw(18)<<""<<setw(12)<<""<<setw(5)<<""<<endl;

    cout<<setiosflags(ios::left)<<setfill(' ')<<setw(12)<<"Jones"<<setw(13)<<"Bernard"<<setw(18)<<"109 Pine Lane"<<setw(12)<<"Littletown"<<setw(5)<<"MI"<<endl;

    cout<<setiosflags(ios::left)<<setw(12)<<"O’Brian"<<setw(13)<<"Coleen"<<setw(18)<<"42 E. 99th Ave."<<setw(12)<<"Bigcity"<<setw(5)<<"NY"<<endl;

    cout<<setiosflags(ios::left)<<setw(12)<<"Wong"<<setw(13)<<"Harry"<<setw(18)<<"121-A Alabama St."<<setw(12)<<"Lakeville"<<setw(5)<<"IL"<<endl;

    return 0;
}
