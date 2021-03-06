#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


class Queue{

	public:
		
		int *arr;
		int nextIndex;
		int firstIndex;
		int size;
		int capacity;

		Queue(){
			arr = new int[5];
			nextIndex = 0;
			firstIndex = -1;
			size = 0;
			capacity = 5;
		}


		void enqueue(int element){

			if(size == capacity){
				int *temp = new int[2*capacity];
				for (int i = 0; i < capacity; i++){
						temp[i] = arr[i];
					}	
				delete[] arr;
				arr = temp;
				capacity = 2*capacity;
			}	

			arr[nextIndex] = element;
			nextIndex = (nextIndex + 1)%capacity;
			size++;
			firstIndex++;

		}

		void dequeue(){

			if(size == 0){
				cout<<"Queue is empty"<<endl;
				return;
			}

			firstIndex = (firstIndex+1) % capacity;
			size--;

			if(size == 0){

				nextIndex = 0;
				firstIndex = -1;

			}
		}

		int front(){
			if(isEmpty()){
				cout<<"Queue is Empty "<<endl;
				return 0;			
			}

			return arr[firstIndex];
		}

		int sizeq(){
			return size;
		}
		bool isEmpty(){
			return size==0;
		}
};

int main(){

	Queue q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);

	cout<<"Size "<<q.sizeq()<<endl;

	cout<<"Front "<<q.front()<<endl;
	q.dequeue();

	cout<<"Front "<<q.front()<<endl;
	q.dequeue();

	cout<<"Front "<<q.front()<<endl;
	q.dequeue();

	cout<<"Size "<<q.sizeq()<<endl;

	cout<<"Front "<<q.front()<<endl;
	q.dequeue();

	cout<<"Front "<<q.front()<<endl;
	q.dequeue();

	cout<<"Size "<<q.sizeq()<<endl;
	cout<<"Empty "<<q.isEmpty()<<endl;

	q.dequeue();
	q.dequeue();
	q.dequeue();


	return 0;
}