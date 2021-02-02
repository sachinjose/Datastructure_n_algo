#include<iostream>
using namespace std;

int main(){
	cout<<"Enter the number of elements"<<endl;
	int n;
	cin>>n;
	int max;

	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	for(int i=n-1; i>=0; i--){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}