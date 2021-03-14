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

int height(tree_node<int>* root){
	if(root == NULL){
 		return 0;
 	}

 	return 1 + max(height(root->left),height(root->right)); 
}

int maxDiameter(tree_node<int>* root){

	if(root == NULL){
 		return 0;
 	}

 	int option1 = height(root->left) + height(root->right);
 	int option2 = maxDiameter(root->left);
 	int option3 = maxDiameter(root->right);

 	return max(option1,max(option2,option3));

}

par<int,int> heightDiameter(tree_node<int>* root){

  if(root == NULL){
    pair<int,int> p;
    p.first = 0;
    p.second = 0;
    return p;
  }

  pair<int,int> leftAns = heightDiameter(root->left);
  pair<int,int> rightAns = heightDiameter(root->right);

  int lh = leftAns.first;
  int ld = leftAns.second;

  int rh = rightAns.first;
  int rd = rightAns.second;

  int height = 1 + max(lh,rh);
  int diameter = max(lh+rh,max(ld,rd));

  pair<int,int> p;
  p.first = height;
  p.second = diameter;
  return p;

}

int maxDiameter_2(tree_node<int>* root){
  pair<int,int> p = heightDiameter(root);
  return p.second;
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

    cout<<maxDiameter(root)<<endl;
  	
  	delete root;

  	return 0;
 }