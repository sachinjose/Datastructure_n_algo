#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

class Stack{

	public:
		
		int *arr;
		int nextIndex;
		int capacity;

		Stack(){
			arr = new int[5];
			nextIndex = 0;
			capacity = 5;
		}

		Stack(int cap){
			arr = new int[cap];
			nextIndex = 0;
			capacity = cap;
		}

		void push(int element){
			if(nextIndex == capacity){	//auto increase
				int *newdata = new int[2*capacity];
				for (int i = 0; i < capacity; i++){
					newdata[i] = arr[i];
				}
				delete []arr;
				arr = newdata;
				capacity = capacity*2;
			}
			nextIndex++;
			arr[nextIndex]=element;
		}

		void pop(){
			if(isEmpty()){
				cout<<"Stack Underflow "<<endl; 
			}
			nextIndex--;
		}

		int top(){
			if(nextIndex!=0){
				return arr[nextIndex];			
			}
			cout<<"Stack is Empty "<<endl;
			return -1;
		}

		int size(){
			return nextIndex;
		}
		bool isEmpty(){
			return nextIndex==0;
		}
};

int main(){

	Stack s(4);

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout<<s.top()<<endl;
	s.pop();

	cout<<s.top()<<endl;
	s.pop();

	cout<<s.top()<<endl;
	s.pop();

	cout<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;

	s.pop();
	s.pop();
	s.pop();


	return 0;
}