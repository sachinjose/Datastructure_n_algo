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

tree_node<int>* take_input(){

	int data;
	cout<<"Enter the data : "<<endl;
	cin>>data;

	if(data == -1){
		return NULL;
	}

	tree_node<int> *root = new tree_node<int>(data);

	tree_node<int> *n1  = take_input();
	tree_node<int> *n2  = take_input();

	root->left = n1;
	root->right = n2;

	return root;
}

tree_node<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    tree_node<int>* root = new tree_node<int>(rootData);
    queue<tree_node<int>*> q;
    q.push(root);

    while(!q.empty()){
        tree_node<int>* f = q.front();
        q.pop();

        int leftData;
        cout<<"Enter leftchild of "<<f->data<<endl;
        cin>>leftData;

        if(leftData != -1){
			tree_node<int>* n1 = new tree_node<int>(leftData);
	        q.push(n1);
	        f->left = n1;
        }

        int rightData;
        cout<<"Enter rightchild of "<<f->data<<endl;
        cin>>rightData;

        if(rightData != -1){
	        tree_node<int>* n2 = new tree_node<int>(rightData);
	        q.push(n2);
	        f->right = n2;

        }
    
    }
    return root;
}

void printTreeLevel(tree_node<int>* root){

 	if(root == NULL){
 		return;
 	}

 	queue<tree_node<int>*> q;
 	q.push(root);

 	while(!q.empty()){

 		tree_node<int> *f = q.front();
 		q.pop();

 		if(f != NULL){

			cout<<f->data<<" : ";

		 	if(f->left!=NULL){
		 		cout<<" L "<<f->left->data;
		 	}

		 	if(f->right!=NULL){
		 		cout<<" R "<<f->right->data;
		 	}

		 	q.push(f->left);
		 	q.push(f->right);
		 	cout<<endl;

 		}

 	}

 }

int countNode(tree_node<int>* root){
 	if(root == NULL){
 		return 0;
 	}
 	
 	return countNode(root->left) + countNode(root->right) + 1;

}

void inOrder(tree_node<int>* root){
	 if(root == NULL){
 		return;
 	}
 	inOrder(root->left);
 	cout<<root->data<<" ";
  	inOrder(root->right);	
}

void preOrder(tree_node<int>* root){
	 if(root == NULL){
 		return;
 	}
 	cout<<root->data<<" ";
 	preOrder(root->left);
  	preOrder(root->right);
}

void postOrder(tree_node<int>* root){
	 if(root == NULL){
 		return;
 	}
 	postOrder(root->left);
 	postOrder(root->right);
 	cout<<root->data<<" ";
}

int maxDept(tree_node<int>* root){
	if(root == NULL){
 		return 0;
 	}

 	int maxDepthLeft = maxDept(root->left);
 	int maxDepthRight = maxDept(root->right);

 	return 1 + max(maxDepthLeft,maxDepthRight);

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


 	tree_node<int> *root = take_input();


 	tree_node<int> *root = takeInputLevelWise();

  	printTree(root);

  	printTreeLevel(root);

  	cout<<countNode(root)<<" "<<endl;

  	cout<<endl;

  	inOrder(root);
  	cout<<endl;
  	preOrder(root);
  	cout<<endl;
  	postOrder(root);
  	cout<<endl;

  	cout<<maxDept(root)<<endl;
  	
  	delete root;

 	return 0;
 }