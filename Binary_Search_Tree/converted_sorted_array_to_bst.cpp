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

void printTree(tree_node<int>* root){
	if(root == NULL){
		return;
	}
	
	cout<<root->data<<" : ";

	if(root->left!=NULL){
		cout<<" L "<<root->left->data;
	}

	if(root->right!=NULL){
		cout<<" R "<<root->right->data;
	}

	cout<<endl;

	printTree(root->left);
	printTree(root->right);
}

tree_node<int>* helperCreateTree(tree_node<int>* num, int s, int e){
	if(s > e){
		return NULL
	}

	mid = (s+e)/2;
	int rootData = num[mid];

	tree_node<int>* root = new tree_node<int>(rootData);
	root->left = helperCreateTree(num,s,mid-1);
	root->right = helperCreateTree(num,mid+1,e);

	return root;

}
tree_node<int>* createTree(tree_node<int>* num){
	return helperCreateTree(num,0,n-1);
}

int main(){

	vector<int> *num;
	num.push_back(1);
	num.push_back(2);
	num.push_back(3);
	num.push_back(4);
	num.push_back(5);
	num.push_back(6);

 	tree_node<int> *root = createTree(num);

 	printTree(root);

  	delete root;

 	return 0;
 }