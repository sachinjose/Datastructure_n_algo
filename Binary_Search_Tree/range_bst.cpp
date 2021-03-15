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

int rangeSumBST(tree_node<int>* root, int L, int R){

		if(root == NULL){
			return 0;
		}

		int sum = 0;

		if (root->data >= L && root->data <= R){
			sum+=root->data;
		}

		if(root->data > R){
			sum+=rangeSumBST(root->left,L,R);
		}

		else if(root->data < L){
			sum+=rangeSumBST(root->right,L,R);
		}

		else{
			sum+= rangeSumBST(root->left,L,R) + rangeSumBST(root->right,L,R);
		}

		return sum;

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

  	cout<<rangeSumBST(root,1,7);

  	delete root;

 	return 0;
 }