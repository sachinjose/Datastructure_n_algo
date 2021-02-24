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

void print_steps(int n, char s, char d, char h){
	if(n==0){
		return;
	}
	print_steps(n-1,s,h,d);
	cout<<"Moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
	print_steps(n-1,h,d,s);
}

int main(){

	int n;
	cin>>n;
	cout<<tower_hanoi(n)<<endl;
	cout<<tower_hanoi_2(n)<<endl;

	print_steps(n,'A','C','B');
	return 0;
}