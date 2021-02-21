#include<iostream>

using namespace std;

int pos_element(int a[],int n,int item){
	if(n == 0){
		if(a[n]==item){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(a[n] == item){
			return 1 + pos_element(a,n-1,item);
		}
		else{
			return pos_element(a,n-1,item);
		}
	}
}


int main(){

	int a[6] = {5,5,5,6,5,6};
	int n = 6;

	cout<<pos_element(a,n,5)<<endl;

	return 0;
}