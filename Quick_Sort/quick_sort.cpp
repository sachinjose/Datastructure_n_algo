#include<iostream>
using namespace std;
void display(int array[], int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

int partition(int a[], int s, int e){

	int i = s;
	int pivot = a[e];

	for(int j=s; j<=e-1; j++){
		if(a[j] < pivot){
			swap(a[i],a[j]);
			i++;
		}
	}

	swap(a[i],a[e]);
	return i;

}

void quicksort(int a[], int s, int e){

	if(s>=e){
		return;
	}

	int p = partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);

}


int main() {

   int n = 7;
   int arr[7] = {8,5,2,1,7,3,4}; 
   display(arr, n);
   
   quicksort(arr, 0, n-1);     //(n-1) for last index

   display(arr, n);

   return 0;
}
