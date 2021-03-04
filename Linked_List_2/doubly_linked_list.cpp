#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


class Node{

	public:
		int data;
		Node *next;
		Node *prev;

		Node(int data){
			this->data = data;
			next = NULL;
			prev = NULL;

		}
};

void print(Node *head){

	Node *temp = head;
	 
	while(temp != NULL){

		cout << temp -> data << " ";
		temp = temp -> next;

	}
	cout << endl;
}

Node* take_input_tail(){

	int data = 0;
	cout<<"Enter the data to be entered (-1 to exit) :"<<endl;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1){

		if(data != -1){

			Node *temp = new Node(data);

			if(head == NULL){
				head = temp;
				tail = head;
			}

			else{
				tail->next = temp;
				temp->prev = tail;
				tail = tail->next;
			}

		}

		cin>>data;

	}

	return head;
}

int main(){


	Node *head_1 = take_input_tail();
	print(head_1);

	return 1;
}
