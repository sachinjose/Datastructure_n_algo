#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int minSteps(int n){

	if(n==1){
		return 0;
	}

	int output = minSteps(n - 1);

	if(n%2 == 0){

		int temp = minSteps(n/2);
		if( temp < output ){
			output = temp;
		}
	}

	if(n%3 == 0){

		int temp = minSteps(n/3);
		if( temp < output ){
			output = temp;
		}
	}

	return output + 1;

}

int minSteps_2(int n, int *arr){

	if(n==1){
		return 0;
	}

	if(arr[n] != 0){
		return arr[n];
	}

	int output = minSteps(n - 1);

	if(n%2 == 0){
		int temp = minSteps(n/2);
		if( temp < output ){
			output = temp;
		}
	}

	if(n%3 == 0){

		int temp = minSteps(n/3);
		if( temp < output ){
			output = temp;
		}
	}

	output++;

	arr[n] = output;

	return output;

}

int minSteps_3(int n){
	
	int *arr = new int[n+1];

	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;

	for (int i = 4; i < (n+1); i++){

		int x = arr[i-1];
		if(i%2 == 0){
			int y = arr[n/2];
			if(y<x){
				x = y;
			}
		}
		if(i%3 == 0){
			int y = arr[n/3];
			if(y < x){
				x = y;
			}
		}

		arr[i] = x + 1;
	}

	int ans = arr[n];
	delete[] arr;
	return ans;
}

int main(){

	int n;
	cin>>n;

	int *arr = new int[n+1];

	for (int i = 0; i < n+1; i++){
		arr[i] = 0;
	}

	cout<<minSteps(n)<<endl;

	cout<<minSteps_2(n,arr)<<endl;

	cout<<minSteps_3(n)<<endl;

	return 0;
}