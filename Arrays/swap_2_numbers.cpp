#include<iostream>
using namespace std;


int main(){
	cout<<"Enter the elements to be swapped"<<endl;
	int a,b;
	cin>>a>>b;

	cout<<"Before Swap a:b "<<a<<":"<<b<<endl;
	swap(a,b);

	cout<<"After Swap a:b "<<a<<":"<<b<<endl;

	a = 5;
	b = 3;
	cout<<"Before Swap a:b "<<a<<":"<<b<<endl;
	a = a^b;
	b = a^b;
	a = a^b;
	cout<<"After Swap a:b "<<a<<":"<<b<<endl;

	return 0;
}