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

bool BST_search(tree_node<int>* root, int key){
	if(root == NULL){
		return false;
	}
	if(root->data == key){
		cout<<"Node "<<root->data<<" Found"<<endl;
		return true;
	}

	if(root->data < key){ 
		return BST_search(root->right,key); 
	}

	else if(root->data > key){ 
		return BST_search(root->left,key);
	}

	else{
		return false;
	}
}


bool BST_search_2(tree_node<int>* root, int key){

	while(root!=NULL){
		if(root->data == key){
			cout<<"Node "<<root->data<<" Found"<<endl;
			return true;
		}

		if(root->data < key){ 
			root = root->right; 
		}

		else if(root->data > key){ 
			root = root->left;
		}

	}

	return false;
}

int BST_min(tree_node<int>* root){
	if(root == NULL){
		return -1;
	}

	if(root->left == NULL){
		return root->data;
	}

	return BST_min(root->left);
}

int BST_min_2(tree_node<int>* root, int key){
	if(root == NULL){
		return -1;
	}

	while(root->left != NULL){
		root = root->left;
	}

	return root->data;
}

int BST_max(tree_node<int>* root){
	if(root == NULL){
		return -1;
	}

	if(root->right == NULL){
		return root->data;
	}

	return BST_min(root->right);
}

int BST_min_2(tree_node<int>* root, int key){
	if(root == NULL){
		return -1;
	}

	while(root->right != NULL){
		root = root->right;
	}

	return root->data;
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

  	if(!BST_search(root,1)){
  		cout<<"Node Not found"<<endl;
  	}

  	cout<<BST_min(root)<<" "<<endl;
  	cout<<BST_max(root)<<" "<<endl;

  	delete root;

 	return 0;
 }