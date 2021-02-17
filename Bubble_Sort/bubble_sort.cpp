#include<iostream>

using namespace std;

void bubble_sort(int array[], int n){

	for (int i = 1; i <= n-1; i++){

		int flag = 0;
		for (int j = 0; j <= n-2; j++){
			if(array[j] > array[j+1]){
				flag = 1;
				swap(array[j],array[j+1]);
			}
		}

		if (flag == 0){
			break;
		}
	}
}


int main(){

	int n;
	cin>>n;

	int array[n];

	for (int i = 0; i <= n-1; i++){
		cin>>array[i];
	}

	bubble_sort(array,n);

	for (int i = 0; i <= n-1; i++){
		cout<<array[i]<<" ";
	}

	cout<<endl;

	return 0;
}
