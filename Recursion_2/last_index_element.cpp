#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


int last_index(int a[], int n, int item){
	if(n==0){
		return -1;
	}
	else{
		if(a[n]==item){
			return n;
		}
		else{
			return last_index(a,n-1,item);
		}

	}

}

int last_index_2(int a[], int n, int i, int item){
	if(i==n){
		return -1;
	}
	int last_occ = last_index_2(a,n,i+1,item);

	if(last_occ == -1){
		if(a[i] == item){
			return i;
		}
		else{
			return -1;
		}
	}
	else{
		return last_occ;
	}
}


int main(){

	int a[5]={2,5,6,5,6};

	cout<<last_index(a,5,5)<<endl;

	int b[5]={1,4,3,4,4};

	cout<<last_index(b,5,4)<<endl;

	cout<<last_index_2(a,5,0,5)<<endl;
	cout<<last_index_2(b,5,0,4)<<endl;

	return 0;

}