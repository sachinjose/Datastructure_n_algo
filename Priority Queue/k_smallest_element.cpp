#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void kSmallestElement(int *input, int n, int k){

	priority_queue<int> pq;

	for (int i = 0; i < k; i++){
		pq.push(input[i]);
	}

	for (int i = k; i < n; i++){
		if(input[i] < pq.top()){
			pq.pop();
			pq.push(input[i]);
		}
	}

	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}

}

int main(){

	int v[8] = {8,5,12,10,0,1,6,9};

	kSmallestElement(v,8,4);

	cout<<endl;

	return 0;

}