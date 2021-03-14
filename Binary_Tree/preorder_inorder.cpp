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

  tree_node<int> * buildTreeHelper(vector <int> &inOrder, vector<int> &preorder, int inS, int inE, int preS, int preE){
  		if((inS>inE) || (preS>preE)){ //empty vector
  			return NULL;
  		}
  		int rootData = preorder[preS];
  		int rootIndex = -1;
  		for (int i = inS; i < inE; i++){
  			if(inOrder[inS]==rootData){
  				rootIndex = i;
  				break;
  			}
  		}

  		int leftInS = inS;
  		int leftInE = rootIndex - 1;
  		int leftPreS = preS + 1;
  		int leftPreE = leftPreS + leftInE - leftInS;

  		int rightInS = rootIndex + 1;
  		int rightInE = inE;
  		int rightPreS = leftPreS + 1;
  		int rightPreE = preE;

  		tree_node<int>* root = new tree_node<int>(rootData);
  		root->left = buildTreeHelper(inOrder,preorder,leftInS,leftInE,leftPreS,leftPreS);
  		root->right = buildTreeHelper(inOrder,preorder,rightInS,rightInE,rightPreS,rightPreE);

  		return root;
  }

 tree_node<int> * buildTree(vector <int> &inOrder, vector<int> &preOrder){

 	int n = inOrder.size();
 	return buildTreeHelper(inOrder,preOrder,0,n-1,0,n-1);
 }

 int main(){

 	vector<int> preOrder;

 	preOrder.push_back(3);
  	preOrder.push_back(9);
 	preOrder.push_back(20);
 	preOrder.push_back(15);
 	preOrder.push_back(7);

 	vector<int> inOrder;

	inOrder.push_back(9);
	inOrder.push_back(3);
	inOrder.push_back(15);
	inOrder.push_back(20);
	inOrder.push_back(7);

 	tree_node<int> *root = buildTree(inOrder,preOrder);

 	printTree(root);

  	delete root;

 	return 0;
 }