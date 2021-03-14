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

bool helper(tree_node<int>* leftTree,tree_node<int>* rightTree){
	if(leftTree == NULL && rightTree!=NULL){
		return false;
	}
	if(leftTree!= NULL && rightTree== NULL){
		return false;
	}
	if(leftTree== NULL && rightTree == NULL){
		return true;
	}
	if(leftTree->data != rightTree->data){
		return false;
	}

	return helper(leftTree->left, rightTree->right) && helper(leftTree->right,rightTree->left);
}

bool symmetricBinaryTree(tree_node<int>* root){

	//conditions for Symmetric Binary Tree
	//Value of T1's root = Value of T2's root
	//T1 Left is symmetrically similar to T2

	if(root == NULL){
		return true;
	}

	return helper(root->left, root->right);

}

 int main(){

 	tree_node<int> *root = new tree_node<int>(3);
 	tree_node<int> *n1 = new tree_node<int>(9);
  	tree_node<int> *n2 = new tree_node<int>(20);
  	tree_node<int> *n3 = new tree_node<int>(15);
  	tree_node<int> *n4 = new tree_node<int>(7);

  	root->right = n1;
  	root->left = n2;

  	n2->right = n3;
  	n2->left = n4;

  	
  	delete root;

 	return 0;
 }