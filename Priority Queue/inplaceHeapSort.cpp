#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void inPlaceHeapSort(int *pq, int n){
	for (int i = 0; i < n; i++){
			int cI = i;
			//up hepify
			while(cI > 0){
				int pI = (cI-1)/2;
				if(pq[cI] < pq[pI]){
					swap(pq[cI],pq[pI]);
					cI=pI;
				}
				else{
					break;
				}		
			}
	}

	int size = n;


	while(size > 0){

		swap(pq[0],pq[size-1]);
		size--;
		int pI = 0;

		while(true){

			int lcI = 2*pI + 1;
			int rcI = 2*pI + 2;
			int mini = pI;

			if(lcI < size && (pq[lcI] < pq[mini])){
				mini = lcI;
			}

			if(rcI < size && pq[rcI] < pq[mini]){
				mini = rcI;
			}

			if(mini == pI){
				break;
			}

			swap(pq[pI],pq[mini]);
			pI = mini;


		}

	}

}


int main(){

	int pq[5] = {5,1,2,0,8};

	inPlaceHeapSort(pq,5);

	for (int i = 0; i < 5; ++i){
		cout<<pq[i]<<" ";
	}

	return 0;
}