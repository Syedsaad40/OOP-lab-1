#include<iostream>
using namespace std;
int main(){
	int id,units,bill;
	float charge;
	string name;
	cin>>"enter the id ">>id>>endl;
	cin>>"enter the name ">>name>>endl;
	cin>>"enter the units consumed ">>units>>endl;
	if(units<=199){
		charge=16.20;
	}
	else if(units>=200&&units<300){
		charge=20.10;
	}
	else if(units>=300&&units<500){
	charge=27.10;	
	}
	else{
		charge = 35.90;
	}
	bill=units*charge;
	if(bill>18000){
		int suramt = 0.15*bill;
		int netbill= bill+suramt; 
	}
	cout<<"The id is "<<id<<endl;
	cout<<"Name is "<<name<<endl;
	cout<<"Units consumed "<<units<<endl;
	cout<<"Amount charges "<<bill<<endl;
	cout<<"Surcharge amount "<<suramt<<endl;
	cout<<"Net amount paid "<<netbill<<endl;
	
}