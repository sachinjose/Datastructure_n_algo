#include<iostream>

using namespace std;


int digit(int n){
	if(n == 0){
		return 0;
	}
	else{

		return 1 + digit(n/10);
	}
}

int main(){
	int n;
	cin>>n;
	cout<<digit(n)<<endl;
	return 0;
}