#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


template <typename T>

class tree_node{
	 public:
	 	T data;
	 	vector<tree_node<T>*> children;

	 	tree_node(T data){
	 		this->data = data;
	 	}
 }; 


void print_tree_level(tree_node<int>* root){
	
	queue<tree_node<int>*> q;
	q.push(root);

	while(!q.empty()){

		tree_node<int> *f = q.front();
		q.pop();

		cout<<f->data<<": ";
		int n = f->children.size();

		for (int i = 0; i < n; i++){
			cout<<f->children[i]->data<<" ";
		}

		cout<<endl;

		for (int i = 0; i < n; i++){
			q.push(f->children[i]);
		}
	}		

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

        cout<<"Enter no of children of "<<f->data<<endl;
        int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            int childData;
            cout<<"Enter "<<i<<" th child of "<<f->data<<endl;
            cin>>childData;

            tree_node<int>* child = new tree_node<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

int countNodes(tree_node<int>* root){
	if(root == NULL){
		return 0;
	}
	int ans = 1;
	for (int i = 0; i < root->children.size(); i++){
			ans+= countNodes(root->children[i]); 
	}
	return ans;

}

int main(){

	tree_node<int> *root = takeInputLevelWise();

	print_tree_level(root);

	cout<<countNodes(root)<<endl;
	
	return 0;
}