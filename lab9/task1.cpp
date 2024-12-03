#include<iostream>
using namespace std;
int main(){
int array[]={5,10,15,20,25};

int size=sizeof (array)/sizeof(int);
int sum=0;

	for (int i=0; i<size; i++){
		
			sum=sum+array[i];
	}
	cout<<"\n sum="<<sum;


	return 0;
}


