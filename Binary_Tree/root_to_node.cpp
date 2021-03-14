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

void printVector(vector<int> v){
	for (int i = 0; i < v.size(); i++){
		cout<<v.at(i)<<endl;
	}
}

bool findNodePath(tree_node<int>* root, int key,vector<int> path){
	if(root == NULL){
		return false;
	}
	path.push_back(root->data);
	if(root->data == key){
		cout<<"Node Found"<<endl;
		cout<<"Path is : "<<endl;
		printVector(path);
		return true;
	}

	bool left = findNodePath(root->left,key,path);
	bool right = findNodePath(root->right,key,path);

	if(left || right){
		return true;
	}

	return false;

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

	vector<int> path;

  	findNodePath(root,15,path);
  	
  	delete root;

 	return 0;
 }