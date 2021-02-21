#include<iostream>

using namespace std;

void printb(int n){
	if(n==1){
		cout<<1<<" "<<endl;
		return;
	}
	else{
		cout<<n<<" ";
		printb(n-1);
	}
}

void printfr(int a,int n){
	if(a==n){
		cout<<n<<" "<<endl;
		return;
	}
	else{
		cout<<a<<" ";
		printfr(a+1,n);
	}
}


int main(){

	int n;
	cin>>n;
	printfr(1,n);

	return 0;
}