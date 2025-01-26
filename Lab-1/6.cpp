#include<iostream>
using namespace std;
int main(){
	string name;
	float score[5],avg;
	int sum=0;
	getline(cin,name);
	for(int i=0;i<5;i++){
		cin>>score[i];
	}
	for(int i=0;i<5;i++){
		sum+=score[i];
	}
	avg=sum/5;
	cout<<"student name:"<<name<<endl;
	cout<<"Test Scores:";
	for(int i=0;i<5;i++){
		cout<<score[i];
	}
	cout<<endl;
	cout<<"Average Test Score:"<<avg<<endl;

	return 0;
}