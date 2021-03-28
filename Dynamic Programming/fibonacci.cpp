#include<iostream>

using namespace std;


int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}

int fib_2(int n, int *arr){

	if((n==0) || (n==1)){
		return n;
	}

	if(arr[n]!= 0){
		return arr[n];
	}

	int output = fib_2(n-1,arr) + fib_2(n-2,arr);
	arr[n] = output;

	return output;

}

int fib_3(int n){

	int *arr = new int[n+1];
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= n; i++){
		arr[i] = arr[i-1] + arr[i-2];	
	}

	int output = arr[n];

	delete[] arr;
	return output;

}

int main(){

	int n;
	cin>>n;

	int *arr = new int[n+1];

	for (int i = 0; i < n+1; i++){
		arr[i] = 0;
	}

	cout<<fib(n)<<endl;

	cout<<fib_2(n,arr)<<endl;

	cout<<fib_3(n)<<endl;

	return 0;
}