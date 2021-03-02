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

int print_ith_node(Node *head, int i){

	Node *temp = head;
	int step = 0;

	if( i < 0){
		return -1;
	}

	while(temp != NULL){
		step++;

		if(step == i){
			cout<<temp->data<<" "<<endl;
			return 0;
		}

		temp = temp -> next;

	}

	return -1;
}

int delete_ith_node(Node *head, int i){

	Node *temp = head;
	int step = 0;
	int prev = i-1;
	
	if( i < 0){
		return -1;
	}

	while(temp != NULL){
		step++;

		if(step == prev){

			Node* runner = temp;
			runner = temp->next;
			temp->next = runner->next;

			delete runner;

			return 1;

		}

		temp = temp -> next;

	}

	return -1;
}

int insert_ith_node(Node *head, int i){

	int data = 0;
	cout<<"Enter the data to be entered (-1 to exit) :"<<endl;
	cin>>data;

	int prev = i-1;
	
	Node *new_node = new Node(data);

	Node *temp = head;

	int step = 0;

	if( i < 0){
		return -1;
	}

	while(temp != NULL){
		step++;

		if(step == prev){

			Node* runner = temp;
			runner = temp->next;

			temp->next = new_node;
			new_node->next = runner;
	
			return 1;
		}

		temp = temp -> next;

	}

	return -1;
}

int length(Node *head){

	Node *temp = head;

	int length = 0;
	 
	while(temp != NULL){

		length++;
		temp = temp -> next;

	}

	return length;
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

Node* take_input_head(){

	int data = 0;
	cout<<"Enter the data to be entered (-1 to exit) :"<<endl;
	cin>>data;
	Node *head = NULL;

	while(data != -1){

		if(data != -1){

			Node *temp = new Node(data);

			if(head == NULL){
				head = temp;
			}

			else{
				temp->next = head;
				head = temp;
			}

		}

		cin>>data;

	}

	return head;
}



int main(){


	Node *head = take_input_tail();

	print(head);
	print_ith_node(head,5);
	insert_ith_node(head,5);

	print(head);

	delete_ith_node(head,5);

	print(head);

	// cout<<length(head)<<endl;

	return 1;
}










