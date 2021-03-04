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
				tail = tail->next;
			}

		}

		cin>>data;

	}

	return head;
}

Node* reverse(Node* head){

	Node* prev = NULL;
	Node* curr = head;;

	while(curr!=NULL){
		
		Node* n = curr->next;
		curr->next = prev;
		prev = curr;
		curr = n;

	}

	return prev;
}

int main(){


	Node *head = take_input_tail();

	print(head);

	head = reverse(head);

	print(head);

	return 1;
}

