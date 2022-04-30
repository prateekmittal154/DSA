# include<bits/stdc++.h>

using namespace std;

class node{

public: 

	int data;
	node* left;
	node* right;


	node(int data){

		this -> data = data;
		this-> left= NULL;
		this-> right=NULL;
	}
};

node* buildtree(){

	cout<<"Enter the data: "<<endl;

	int data;

	cin>>data

	root = new Node(data);

	if (data==-1) return NULL;


	cout<<"Enter data for inserting in left of "<<data<<endl;
	root->left = buildtree(root->left);

	cout<<"Enter the data for inserting in right of "<< data<<endl;
	root->right = buildtree(root->right);

	return root;


}

int main(){


	node* root=NULL;

	root=buildtree();
}