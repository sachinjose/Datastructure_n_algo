#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

queue<int> reverse_q(queue<int> &s){

	if(s.size()==0){
		return s;
	}

	stack<int> temp;

	for (int i = 0; i < 5; i++){
		int topp = s.front();
		s.pop();
		temp.push(topp);

	}

	for (int i = 0; i < 5; i++){
		int topp = temp.top();
		temp.pop();
		s.push(topp);

	}

	return s;
}

int main(){

	queue<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	for (int i = 0; i < 5; ++i){
		cout<<s.front()<<endl;
		s.pop();

	}

	cout<<endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	s = reverse_q(s);

	for (int i = 0; i < 5; ++i){
		cout<<s.front()<<endl;
		s.pop();

	}

	return 0;
}















