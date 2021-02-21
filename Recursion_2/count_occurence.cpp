#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int countoccurence(int a[],int n,int i, int item){
	if(i==n){
		return 0;
	}
	if(a[i] == item){
		return 1 + countoccurence(a,n,i+1,item);
	}
	
	return countoccurence(a,n,i+1,item);
}

void countoccurence_2(int a[],int n,int item, int i,int &ans){
	if(i==n){
		return;
	}
	if(a[i] == item){
		ans++;
	}
	countoccurence_2(a,n,item,i+1,ans);

}

int main(){

	int a[6] = {5,5,5,6,5,6};
	int n = 6;
	int ans = 0;

	cout<<countoccurence(a,n,0,5)<<endl;

	countoccurence_2(a,n,5,0,ans);
	cout<<ans<<endl;
	return 0;
}