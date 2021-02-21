#include<iostream>

using namespace std;

int multip(int m, int n){
	if(n==0){
		return 0;
	}
	else{
		return m + multip(m,n-1);
	}
}

int main(){

	int m,n;
	cin>>m>>n;
	cout<<multip(m,n)<<endl;

	return 0;
}