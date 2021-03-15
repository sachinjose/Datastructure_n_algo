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

bool validateBST(tree_node<int>* root){
	if(root == NULL){
		return true;
	}

	if(root->left!=NULL){
		if(root->data < root->left->data){
				return false;
		}
	}

	if(root->right){
		if(root->data > root->right->data){
			return false;
		}
	}

	return validateBST(root->left) && validateBST(root->right);
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

  	cout<<validateBST(root)<<endl;


  	delete root;

 	return 0;
 }