#include<iostream>

using namespace std;


int sum_digit(int n){
	if(n==0){
		return 0;
	}
	else{
		return n%10 + sum_digit(n/10);
	}


}
int main(){

	int n;
	cin>>n;

	cout<<sum_digit(n)<<endl;

	return 0;
}