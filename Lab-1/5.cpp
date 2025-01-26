#include<iostream>
using namespace std;
int main(){
	string movie_name;
	int ticket_num;
	float gross_amt,percentage,amt_donated,net_sale;
	cout<<"Movie Name:.....................";
	getline(cin,movie_name);
	cout<<"Number Of Tickets Sold:.....................";
	cin>>gross_amt;
	cout<<"Percentage Of Gross Amount Donated:.....................";
	cin>>percentage;
	cout<<"%";
	amt_donated=gross_amt*percentage/100;
	net_sale=gross_amt-amt_donated;
	cout<<"Amount Donated:....................."<<amt_donated<<endl;
	cout<<"Net Sale:....................."<<net_sale;
	return 0;
}