#include"stdc++.h"

using namespace std;

int main(){

	int n;
	cin>>n;

	int array[n];

	for (int i = 0; i <= n-1; i++){
		cin>>array[i];
	}

	sort(array,array+n);

	for (int i = 0; i <= n-1; i++){
		cout<<array[i]<<" ";
	}

	cout<<endl;

	return 0;
}
