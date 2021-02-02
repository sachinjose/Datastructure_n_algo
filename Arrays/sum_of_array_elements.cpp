#include<iostream>
using namespace std;

int main(){

	cout<<"Enter the number of elements"<<endl;
	int n;
	cin>>n;
	int sum=0;

	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		sum+=a[i];
	}

	cout<<"Sum of Array Elements are "<<sum<<endl;


	return 0;
}