#include<iostream>

using namespace std;

bool arr_sort(int k[],int n,int i){
	if(i==n){
		return true;
	}
	else{
		if(k[i] <= k[i+1]){
			return arr_sort(k,n,i+1);
		}
		else{
			return false;
		}
	}
}

bool isSorted(int a[], int n){
	if(n==0 || n==1){
		return true;
	}

	else{
		if(a[0]>a[1]){
			return false;
		}
		else{
			return isSorted(a+1,n-1);
		}
	}
}

int main(){

	int n;

	cin>>n;

	int k[n];

	for (int i = 0; i < n; i++){
		cin>>k[i];
	}

	cout<<arr_sort(k,n-1,0)<<endl;
	cout<<isSorted(k,n)<<endl;

	return 0;
}