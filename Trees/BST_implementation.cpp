#include<bits/stdc++.h>

using namespace std;

class Node{

public:

	int Data;
	Node* left;
	Node* right;


   Node(int data){

   	this->Data= data;
   	left= NULL;
   	right= NULL;
   }


};

Node* InsertNewNode(Node* rootptr, int data){

	Node *newnode= new Node(data);

	if(rootptr==NULL){

        rootptr=newnode;

	}

	else if(data<=rootptr->Data){

		rootptr->left=InsertNewNode(rootptr->left,data);
	}

	else{

		rootptr->right=InsertNewNode(rootptr->right,data);
	}

	return rootptr;



}

bool search(Node* rootptr, int key){

	if(rootptr=NULL) return false;
	if(rootptr->Data==key) return true;

	else if(key<=rootptr->Data){

		return search(rootptr->left, key);

	}

	else{

		return search(rootptr->right, key);

	}
}


int main(){

#ifndef ONLINE_JUDGE
freopen("inputf.in","r",stdin); 
freopen("outputf.out","w",stdout);  
#endif

	Node* root;
	root=NULL;

	root=InsertNewNode(root,15);
	root=InsertNewNode(root,20);
	root=InsertNewNode(root,10);
	root=InsertNewNode(root,35);

	cout<<"Enter the element to be searched"<<endl;

	int n;

	cin>>n;

	bool ans=search(root,n);

	if(ans) cout<<"Found"<<endl;

	else
		cout<<"Not found"<<endl;
}