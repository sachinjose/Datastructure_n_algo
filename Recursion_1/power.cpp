#include<iostream>

using namespace std;

int pow(int item, int n){

	if(n<0){
		return -1;
	}
	if(n==0){
		return 1;
	}
	if(n==1){
		return item;
	}
	else{
		return item * pow(item,n-1); 
	}
}

int main(){

	int item,n;
	cin>>item>>n;

	cout<<pow(item,n)<<endl;

	return 0;
}