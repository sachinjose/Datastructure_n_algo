#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

template<typename T>
class tree_node{

	 public:
	 	T data;
	 	tree_node *right;
	 	tree_node *left;

	 	tree_node(T data){
	 		this->data = data;
	 		this->right = NULL;
	 		this->left = NULL;
	 	}

        ~tree_node(){
        	delete left;
        	delete right;
        }
 }; 

class Node{
	public:
		int data;
		Node *next;
 
	Node(int data){
		this -> data = data;
		this -> next = NULL;
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



Node* createLinkedList(tree_node<int> *root, Node* head){

	if(root == NULL){
		return head;
	}

	createLinkedList(root->left,head);

	int nodeData = root->data;
	Node* temp = new Node(nodeData);

	if(head == NULL){
		head = temp;
	}

	else{
		temp->next = head;
		head = temp;
	}

	createLinkedList(root->right,head);

	return head;
}

int main(){

 	tree_node<int> *root = new tree_node<int>(4);
 	tree_node<int> *n1 = new tree_node<int>(2);
  	tree_node<int> *n2 = new tree_node<int>(7);
  	tree_node<int> *n3 = new tree_node<int>(3);
  	tree_node<int> *n4 = new tree_node<int>(1);

  	root->right = n2;
  	root->left = n1;

  	n1->right = n3;
  	n1->left = n4;

  	Node* head = NULL;

  	head = createLinkedList(root,head);

  	print(head);

  	delete root;

 	return 0;
 }
