#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void saveAllPos(int a[], int n, int i, int item, vector<int> &ans){
	
	if(i==n){
		return;
	}

	if(a[i] == item){
		ans.push_back(i);
	}

	saveAllPos(a,n,i+1,item,ans);
}

int saveAllPos_2(int a[], int n, int i, int item, int out[], int j){
	
	if(i==n){
		return 0;
	}

	if(a[i] == item){
		out[j] = i;
		return 1 + saveAllPos_2(a,n,i+1,item,out,j+1);
	}

	return saveAllPos_2(a,n,i+1,item,out,j);
}

int main(){

	int a[6]={5,5,6,5,6,7};

	vector<int> v;

	saveAllPos(a,5,0,5,v);

	for (int i = 0; i < v.size(); i++){
		cout<<v.at(i)<<" ";
	}
	 cout<<endl;

	int out[10];

	int j = saveAllPos_2(a,5,0,5,out,0);

	for (int i = 0; i < j; i++){
		cout<<out[i]<<" ";
	}

	cout<<endl;
	return 0;

}