#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


class Node{

	public:
		int data;
		Node *next;

		Node(int data){
			this->data = data;
			next = NULL;

		}
};

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
				tail = tail->next;
			}

		}

		cin>>data;

	}

	return head;
}

void print(Node *head){

	Node *temp = head;
	 
	while(temp != NULL){

		cout << temp -> data << " ";
		temp = temp -> next;

	}

	cout << endl;
}

void remove_node(Node* head, int k){

	Node* slow = head;
	Node* fast = head;


	while(k--){
		fast = fast->next;

	}

	while(fast->next != NULL){
		slow = slow->next;
		fast = fast->next;
	}

	Node* temp = slow;
	temp = slow->next;
	slow->next = temp->next;

	delete temp;


}

int main(){


	Node *head = take_input_tail();

	print(head);

	remove_node(head,4);

	print(head);

	return 1;
}