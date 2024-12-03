#include<iostream>
using namespace std;

int Largernum(int num1, int num2){
	if (num1>num2){
		return num1;
	}
	else{

	return num2;
	}
}


int main(){
	int large=Largernum(5,10);
	cout<<"The larger num is: "<<large<<endl;


	return 0;
}


