#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

// //difference between inbuilt and external 
// isempty() -> empty()
// getsize() -> int size()
// insert(ele) -> push(T ele)
// getMin() -> T top()
// int removeMin -> void pop()


int main(){

	priority_queue<int> pq;//max heap

	pq.push(16);
	pq.push(1);
	pq.push(167);
	pq.push(7);
	pq.push(45);
	pq.push(32);

	cout<<"Size "<<pq.size()<<endl;
	cout<<"Top "<<pq.top()<<endl; //largest eleemt

	while(!pq.empty()){
		cout<<pq.top()<<endl;
		pq.pop();
	}

	return 0;
}