#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int sum_array(int a[], int n){
	if(n==0){
		return 0;
	}
	else{
		return a[n-1]+sum_array(a,n-1);
	}
}

int sum_array_2(int a[], int n){
	if(n==0){
		return 0;
	}
	else{
		return a[0]+sum_array_2(a+1,n-1);
	}
}

int sum_array_3(int a[], int n, int i){
	if(i==n){
		return 0;
	}
	else{
		return a[i] + sum_array_3(a,n,i+1);
	}
}

int main(){

	int a[5]={1,2,3,4,5};

	cout<<sum_array(a,5)<<endl;
	cout<<sum_array_2(a,5)<<endl;
	cout<<sum_array_3(a,5,0)<<endl;
	return 0;
}