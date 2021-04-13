#include<iostream>

using namespace std;

void selection_sort(int array[],int size){

	int min_right;

	for (int i = 0; i <= size-2; i++){
		
			int min_right = i;

			for (int j = i+1; j <= size-1 ; j++){
				
				if (array[j] < array[min_right] ){
						
						min_right  = j;
					}	

			}

			swap(array[i],array[min_right]);

	}

}

int main(){

	int n;
	cin>>n;

	int array[n];
	for (int i = 0; i < n; i++){
		cin>>array[i];
	}

	selection_sort(array,n);

	for (int i = 0; i < n; i++){
		cout<<array[i]<<" ";
	}

	cout<<endl;

	return 0;
}