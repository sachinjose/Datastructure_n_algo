#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int main(){

	int n,key;
	int flag = 0;

	cin>>n;

	int array[n];

	for (int i = 0; i <= n-1; i++){
		cin>>array[i];
	}

	cin>>key;

	for (int i = 0; i < n; i++){
		if (array[i] == key){
			cout<<"Found in position :"<<i<<endl;
			flag = 1;
		}		
	}

	if(flag == 0){
		cout<<"Element is not in the list"<<endl;
	}


	return 0;
}
