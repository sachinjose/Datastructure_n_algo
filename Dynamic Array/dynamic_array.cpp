#include<iostream>
using namespace std;

class DynamicArray {
	int *data;
	int nextIndex;
	int capacity;

	public:

		DynamicArray(){
			data = new int[5];
			nextIndex = 0;
			capacity = 5;
		}

		void add(int element){
			if(nextIndex == capacity){
				int *newdata = new int[2*capacity];
				for (int i = 0; i < capacity; i++){
					newdata[i] = data[i];
				}
				delete []data;
				data = newdata;
				capacity = capacity*2;
			}
			else{
				data[nextIndex] = element;
				nextIndex++;
			}	
		}

		void add(int element, int i){
			if(i<nextIndex){
				data[i] = element;
			}
			else if(i == nextIndex){
				add(element);
			}
			else{
				return;
			}
		}

		int get(int i){
			if(i>=0 && i<nextIndex){
				return data[i];
			}
			else{
				return -1;
			}
		}

		void getCapacity(){
			cout<<capacity<<endl;
		}


		void print(){
			for (int i = 0; i < nextIndex; i++){
				cout<<data[i]<<" "<<endl;
			}
		}

};