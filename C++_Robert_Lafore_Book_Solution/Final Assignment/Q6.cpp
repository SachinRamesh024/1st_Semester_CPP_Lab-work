#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Employee{
	private:
	    int ID;
        string Name; 
		string Address;
		string Dept;// (Admin/Sales/Production/IT)
		double Phone;
        int Age;
    public:
    	
    	void getdata(){
    		ofstream writing("C://Users//sachi//OneDrive//Desktop//PF All Tasks//Assignment//emp.txt",ios::app);	
    		cout<<"\n\n\t\t\tEmployee Data \n\n";
    		writing<<"\n\n\t\t\tEmployee Data \n\n";
    		cout<<"Enter employee ID : ";cin>>ID;
    		cin.ignore();
    		cout<<"Enter employee name: ";getline(cin,Name);
    		cout<<"Enter employee Address :";getline(cin,Address);
    		cout<<"Enter employee Department :";getline(cin,Dept);

    		cout<<"Enter employee Phone :";cin>>Phone;

    		cout<<"Enter employee Age :";cin>>Age;
    		
    		writing<<" Employee ID : "<<ID<<endl;
    		writing<<" Employee name: "<<Name<<endl;
    		writing<<" Employee Address :"<<Address<<endl;
    		writing<<" Employee Department :"<<Dept<<endl;
    		writing<<" Employee Phone :"<<Phone<<endl;
    		writing<<" Employee Age :"<<Age<<endl;
    		
		}
		void spilt(){
    		
        	ifstream reading("C://Users//sachi//OneDrive//Desktop//PF All Tasks//Assignment//emp.txt");
        	reading>>ID>>Name>>Address>>Dept>>Phone>>Age;
        	if(Dept=="Admin"){
        		ofstream writing("f:/PF Assignment/Admin.txt");
        	writing<<" Employee ID : "<<ID<<endl;
    		writing<<" Employee name: "<<Name<<endl;
    		writing<<" Employee Address :"<<Address<<endl;
    		writing<<" Employee Department :"<<Dept<<endl;
    		writing<<" Employee Phone :"<<Phone<<endl;
    		writing<<" Employee Age :"<<Age<<endl;
    		
			}
		else if(Dept=="Sales"){
        		ofstream writing("C://Users//sachi//OneDrive//Desktop//PF All Tasks//Assignment//Sales.txt");
            writing<<" Employee ID : "<<ID<<endl;
    		writing<<" Employee name: "<<Name<<endl;
    		writing<<" Employee Address :"<<Address<<endl;
    		writing<<" Employee Department :"<<Dept<<endl;
    		writing<<" Employee Phone :"<<Phone<<endl;
    		writing<<" Employee Age :"<<Age<<endl;
    		
			}
			else if(Dept=="Production"){
        		ofstream writing("C://Users//sachi//OneDrive//Desktop//PF All Tasks//Assignment//Production.txt");
            writing<<" Employee ID : "<<ID<<endl;
    		writing<<" Employee name: "<<Name<<endl;
    		writing<<" Employee Address :"<<Address<<endl;
    		writing<<" Employee Department :"<<Dept<<endl;
    		writing<<" Employee Phone :"<<Phone<<endl;
    		writing<<" Employee Age :"<<Age<<endl;
    		
			}
		else if(Dept=="IT"){
        		ofstream writing("C://Users//sachi//OneDrive//Desktop//PF All Tasks//Assignment//IT.txt");
        writing<<" Employee ID : "<<ID<<endl;
    		writing<<" Employee name: "<<Name<<endl;
    		writing<<" Employee Address :"<<Address<<endl;
    		writing<<" Employee Department :"<<Dept<<endl;
    		writing<<" Employee Phone :"<<Phone<<endl;
    		writing<<" Employee Age :"<<Age<<endl;
    		
			}
        	
		}
        
};
int main(){
	Employee emp[4];
	for(int i=0;i<4;i++){
	emp[i].getdata();
	emp[i].spilt();
	}
}
