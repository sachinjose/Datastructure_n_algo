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

Node* merge(Node* head_1, Node* head_2){

	if(head_1 == NULL){
		return head_1;
	}
	if(head_2 == NULL){
		return head_2;
	}

	Node* head_3 = NULL;

	if(head_1->data < head_2->data){
		head_3 = head_1;
		head_1 = head_1->next;
	}
	else{
		head_3 = head_2;
		head_2 = head_2->next;
	}

	Node* run_3 = head_3;

	while(head_1 && head_2){
		if(head_1->data < head_2->data){
			run_3->next = head_1;
			head_1 = head_1->next;
		}
		else{
			run_3->next = head_2;
			head_2 = head_2->next;
		}
		run_3 = run_3->next;
	}
	if(head_1){
		run_3->next = head_1;
	}
	if(head_2){
		run_3->next = head_2;
	}

	return head_3;

}

int main(){


	Node *head_1 = take_input_tail();
	Node *head_2 = take_input_tail();

	Node *head_3 = merge(head_1,head_2);

	print(head_3);

	return 1;
}