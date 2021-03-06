#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


template <typename T>

class Node{

	public:
		T data;
		Node<T> *next;

		Node(T data){
			this->data = data;
			next = NULL;

		}
};

template <typename T>

class Stack{
		public:
		Node<T> *head;
		int capacity;
		Node<T> *nextIndex;

		Stack(){
			head = NULL;
			capacity = 0;
			nextIndex = NULL;
		}

		void push(T element){

			Node<T> *n = new Node<T>(element);
			n->next = head;
			head = n;
			capacity++;
		}

		void pop(){
			if(isEmpty()){
				cout<<"Stack Underflow "<<endl; 
				return;
			}

			Node<T> *temp = head;
			head = head->next;

			temp->next = NULL;
			delete temp;
			capacity--;
		}

		T top(){
			if(capacity!=0){
				return head->data;			
			}
			cout<<"Stack is Empty "<<endl;
			return 0;
		}

		int size(){
			return capacity;
		}
		bool isEmpty(){
			return capacity==0;
		}
};


int main(){

	Stack<int> s;

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