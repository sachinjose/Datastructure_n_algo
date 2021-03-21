#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

template<typename T>
class BTNode{
	public:	
		T data;
		BTNode *right;
		BTNode *left;

	BTNode(T data){
		this->data = data;
		this->right = NULL;
		this->left = NULL;
	}

	~BTNode(){
		delete left;
		delete right;
	}
};

class BST{

	BTNode<int>* root;

	void printTree(BTNode<int>* root){
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

	bool hasData(BTNode<int>* node, int data){

        if(node==NULL){
            return false;
        }

        if(node->data == data){
            return true;
        }

        if(node->data > data){
            return hasData(node->left, data);
        }

        else{
           return hasData(node->right, data);
        }

	}

    BTNode<int>* insert(BTNode<int>* node, int data){
        if(node == NULL){
            BTNode<int> *n = new BTNode<int>(data);
            return n;
        }
        if(data < node->data){
            node->left = insert(node->left , data);
        }
        else{
           node->right = insert(node->right, data);
        }
        return node;
    }

     BTNode<int>* deleteData(BTNode<int>* node, int data){
        if(node == NULL){
            return NULL;
        }

        if(data > node->data){
            node->right = deleteData(node->right, data);
        }

        else if(data < node->data){
           node->left = deleteData(node->left, data);
        }

        else{

           if(node->left==NULL && node->right==NULL){
              delete node;
              return NULL;
           }
           else if(node->right == NULL){
               BTNode<int>* temp = node->left;
               node->left = NULL;
               delete node;
               return temp;
           }
           else if(node->left==NULL){
               BTNode<int>* temp = node->right;
               node->right = NULL;
               delete node;
               return temp;
           }
           else{

               BTNode<int>* minNode = node->right;
               while(minNode->left != NULL){
                minNode = minNode->left;
               }
               int rightMin = minNode->data;
               node->data = rightMin;
               node->right = deleteData(node->right, rightMin);
           
           }
        }

        return node;
     }

	public:	

	BST(){
		root = NULL;
	}

	~BST(){
		delete root;
	}

	void insert(int data){
		root = insert(root,data);
	}

	void deleteData(int data){
		root = deleteData(root,data);
	}

	bool hasData(int data){
		return hasData(root,data);
	}

	void print(){
		printTree(root);
	}

};

int main(){
   BST b;
   b.insert(10);
   b.insert(5);
   b.insert(20);
   b.insert(7);
   b.insert(3);
   b.insert(15);

   b.print();
   int data;
   cin>>data;
   cout<<b.hasData(data);
   return 0;
}