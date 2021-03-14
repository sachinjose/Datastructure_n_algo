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


int findMaximum(tree_node<int>* root){
	if(root == NULL){
		return INT_MIN;
	}
	int maxChild = max(findMaximum(root->left),findMaximum(root->right));
	return max(root->data,maxChild);
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

  	cout<<findMaximum(root)<<endl;
  	
  	delete root;

 	return 0;
 }