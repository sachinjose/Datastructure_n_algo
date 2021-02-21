#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


int first_index(int a[], int n, int i, int item){
	if(i==n){
		return -1;
	}
	else{
		if(a[i] == item){
			return i;
		}
		else{
			return first_index(a,n,i+1,item);
		}
	}
}

int main(){

	int a[5]={2,5,6,5,6};

	cout<<first_index(a,5,0,5)<<endl;

	int b[5]={1,4,3,4,4};

	cout<<first_index(b,5,0,4)<<endl;

	return 0;

}