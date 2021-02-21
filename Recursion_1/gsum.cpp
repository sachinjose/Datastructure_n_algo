#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

double gsum(int k){
	if(k==0){
		return 1;
	}
	return 1.0/pow(2,k) + gsum(k-1);
}

int main(){

	int k;
	cin>>k;
	cout<<gsum(k)<<endl;

	return 0;
}