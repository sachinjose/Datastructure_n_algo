#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void binary_search(int array[],int n, int key){

	int left = 0;
	int right = n-1;
	int mid = (left+right)/2;
	while(left<=right){

		mid = left + (right-left)/2;
		if(array[mid] == key){
			cout<<"Found at index: "<<mid<<endl;
			return;
		}
		else if(array[mid]>key){ // value is less than middle value
			right = mid - 1;
		}
		else {	//value is greater than middle value
			left = mid + 1;
		}
	}

	cout<<"Element is not in the list"<<endl;
	return;
}

int main(){

	int n,key;
	int flag = 0;

	cin>>n;

	int array[n];

	for (int i = 0; i <= n-1; i++){
		cin>>array[i];
	}

	cout<<"Enter Key"<<endl;
	cin>>key;

	binary_search(array,n,key);

	return 0;
}
