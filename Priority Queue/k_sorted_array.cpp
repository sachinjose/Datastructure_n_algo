#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void kSortedArray(int *input, int n, int k){

	priority_queue<int> pq;

	for (int i = 0; i < k; i++){
		pq.push(input[i]);
	}

	int s = 0;

	for (int i = k; i < n; i++){
		input[s] = pq.top();
		pq.pop();
		s++;
		pq.push(input[i]);
	}

	while(!pq.empty()){
		input[s] = pq.top();
		pq.pop();
		s++;
	}

}

int main(){

	int v[5] = {10,12,6,7,9};

	kSortedArray(v,5,3);

	for (int i = 0; i < 5; ++i){
		cout<<v[i]<<" ";
	}

	cout<<endl;

	return 0;

}