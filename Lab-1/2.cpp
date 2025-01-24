#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int size=10,sum;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int *ptr=arr;
	for(int i=0;i<size;i++){
		sum+=ptr[i];
	}
	cout<<"The sum of all the elements is "<<sum<<endl;
}