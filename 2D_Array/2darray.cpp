#include<iostream>
using namespace std;

int main(){

	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m,n;
	cin>>m>>n;

	//row wise 
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}

	//print
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}