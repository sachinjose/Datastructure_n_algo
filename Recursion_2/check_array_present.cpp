#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

bool is_present(int a[], int n, int item){
	if(n==0){
		return false;
	}
	else{
		if(a[n-1] == item){
			return true;
		}
		else{
			return is_present(a,n-1,item);
		}
	}
}

bool is_present_2(int a[], int n, int item){
	if(n==0){
		return false;
	}
	else{
		if(a[0] == item){
			return true;
		}
		else{
			return is_present_2(a+1,n-1,item);
		}
	}
}

int is_present_3(int a[], int n, int i, int item){
	if(i==n){
		return 0;
	}
	else{
		if(a[i] == item){
			return true;
		}
		else{
			return is_present_3(a,n,i+1,item);
		}
	}
}

int main(){

	int a[5]={1,2,3,4,5};

	cout<<is_present(a,5,3)<<endl;
	cout<<is_present_2(a,5,5)<<endl;
	cout<<is_present_3(a,5,0,3)<<endl;
	return 0;
}