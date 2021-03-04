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


int length_recursive(Node* head){
	if(head == NULL){
		return 0;
	}
	else{
		return 1 + length_recursive(head->next);
	}

}

bool find_element(Node* head, int item){

	if(head == NULL){
		return false;
	}

	Node* temp = head;

	while(temp!=NULL){
		if(temp->data == item){
			return true;
		}
		else{
			temp = temp->next;
		}
	}

	return false;
}

bool search_recursive(Node* head, int item){
	if(head == NULL){
		return false;
	}
	if(head->data == item){
		return true;
	}

	return search_recursive(head->next,item);
}

int middle_node(Node* head){

	Node* slow = head;
	Node* fast = head->next;

	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
	}
	if(fast != NULL){
		Node* temp = slow->next;//even
		return temp->data;
	}

	return slow->data;//odd
}

int main(){


	Node *head = take_input_tail();

	// print(head);
	// print_ith_node(head,5);
	// insert_ith_node(head,5);

	// print(head);

	// delete_ith_node(head,5);

	// cout<<length_recursive(head)<<endl;

	// cout<<find_element(head,5)<<endl;

	// cout<<search_recursive(head,5)<<endl;

	cout<<middle_node(head)<<endl;

	// print(head);

	// cout<<length(head)<<endl;

	return 1;
}










