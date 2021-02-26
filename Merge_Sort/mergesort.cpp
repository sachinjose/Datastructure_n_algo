#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void merge_array(int n[],int s, int e){

	int mid = (s+e)/2;

	int n1 = mid + 1 - s; 
	int n2 = e - mid;

	int x[n1];
	int y[n2];

	for (int i = 0; i < n1; i++){
		x[i] = n[s+i];
	}



	for (int i=0; i<n2; i++){
		y[i] = n[mid+1+i];
	}


	int i = 0;
	int j = 0;
	int k = s; 

	while( i < n1 && j < n2){
		if( x[i] <= y[j] ){
			n[k] = x[i];
			i++;
		}
		else{
			n[k] = y[j];
			j++;
		}
		k++;
	}
	
	while(i < n1){
			n[k] = x[i];
			i++;
			k++;
		}

	while(j < n2){
			n[k] = y[j];
			j++;
			k++;
		}


}

void merge_sort(int n[],int s,int e){
	if(s>=e){
		return;
	}
	int mid = (s+e)/2;
	merge_sort(n,s,mid);
	merge_sort(n,mid+1,e);
	merge_array(n,s,e);

}



int main(){

	int n[10]={10,9,8,7,6,5,4,3,2,1};	
	
	merge_sort(n,0,9);

	display(n,10);

	return 0;

}