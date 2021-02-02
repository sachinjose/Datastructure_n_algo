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
		if( i == 0 ){
			max = a[i];
		}
		else{
			if ( a[i] > max ){
				max = a[i];
			}
		}
	}

	cout<<"Largest Element in the Array is "<<max<<endl;


	return 0;
}