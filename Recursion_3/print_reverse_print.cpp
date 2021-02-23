#include<iostream>

using namespace std;

void print(int a[]){
	if(a[0]=='\0'){
		cout<<endl;
		return;
	}
	cout<<a[0]<<" ";
	print(a+1);
}

void print_1(int a[], int n, int i){
	if(i==n){
		cout<<endl;
		return;
	}
	cout<<a[i]<<" ";
	print_1(a,n,i+1);
}

void reverse_print(int a[]){
	if(a[0]=='\0'){
		cout<<endl;
		return;
	}
	reverse_print(a+1);
	cout<<a[0]<<" ";
}

void reverse_print_1(int a[], int n){
	if(n==0){
		cout<<a[n]<<" ";
		return;
	}
	cout<<a[n]<<" ";
	reverse_print_1(a,n-1);
}

int main(){

	int a[7] = {5,5,5,6,5,6};
	a[6] = '\0';
	int n = 6;

	print_1(a,n,0);
	print(a);

	cout<<endl;

	reverse_print_1(a,n-1);
	reverse_print(a);

	cout<<endl;

	return 0;
}