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



tree_node<int>* buildTreeHelper(vector <int> &inOrder,vector <int> &postOrder,int inS, int inE, int posS, int posE){
	
	if((inS > inE) || (posS > posE)){
		return NULL;
	}
	int rootData = postOrder[posE];
	int rootIndex = -1;

	for (int i = inS; i <= inE; i++){
		if(inOrder[i] == rootData){
			rootIndex = i;
			break;
		}
	}

	int LeftInS = inS;
	int LeftInE = rootIndex - 1;
	int LeftPosS = posS;
	int LeftPosE = LeftPosS + LeftInE - LeftInS;

	int RightInS = rootIndex + 1;
	int RightInE = inE;
	int RightPosS = LeftPosE+1;
	int RightPosE = posE-1;

	tree_node<int>* root = new tree_node<int>(rootData);
	root->left = buildTreeHelper(inOrder,postOrder,LeftInS,LeftInE,LeftPosS,LeftPosE);
	root->right = buildTreeHelper(inOrder,postOrder,RightInS,RightInE,RightPosS,RightPosE);

	return root;
}

 tree_node<int>* buildTree(vector <int> &inOrder, vector<int> &postOrder){

 	int n = inOrder.size();
 	return buildTreeHelper(inOrder,postOrder,0,n-1,0,n-1);
 }

 int main(){

 	vector<int> postOrder;

 	postOrder.push_back(9);
  	postOrder.push_back(15);
 	postOrder.push_back(7);
 	postOrder.push_back(20);
 	postOrder.push_back(3);

 	vector<int> inOrder;

	inOrder.push_back(9);
	inOrder.push_back(3);
	inOrder.push_back(15);
	inOrder.push_back(20);
	inOrder.push_back(7);

 	tree_node<int> *root = buildTree(inOrder,postOrder);

 	printTree(root);

  	delete root;

 	return 0;
 }