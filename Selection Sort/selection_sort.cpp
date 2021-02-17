#include<iostream>

using namespace std;

void selection_sort(int array[],int size){

	int min_right, index = 0;

	for (int i = 0; i <= size-2; i++){
		
			int min_right = INT_MAX;

			for (int j = i+1; j <= size-1 ; j++){
				
				if (array[j] < min_right ){
						min_right = array[j];
						index = j;
					}	

			}

			if(array[i] > min_right){

				int temp = array[i];
				array[i] = array[index];
				array[index] = temp;		

			}


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