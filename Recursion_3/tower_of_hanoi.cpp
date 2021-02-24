#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int tower_hanoi(int n){
	return pow(2,n)-1;
}

int tower_hanoi_2(int n){
	if(n==0){
		return 0;
	}
	return 1 + 2 * tower_hanoi_2(n-1);
}

int main(){

	int n;
	cin>>n;
	cout<<tower_hanoi(n)<<endl;
	cout<<tower_hanoi_2(n)<<endl;
	return 0;
}