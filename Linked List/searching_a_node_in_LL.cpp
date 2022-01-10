#include<bits/stdc++.h>

using namespace std;

class Node{

    public:

    int data;
    Node *next;

    Node(int data){

        this->data = data;

        next= NULL;
    }
};

Node* takeinput(){

    int data;

    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1){

        Node *newnode = new Node(data);

        if(head==NULL){

            head = newnode;
            tail= newnode;


        }

        else{

            tail->next = newnode;

            tail= newnode;
        }

        cin>>data;

        
    }

    return head;
}

int searchnode(Node* head, int key){

    Node* curr = head;
    int pos=0;

    while ( curr ->data != key ){

        pos++;
        curr= curr->next;
    }

    if( curr->data= key){

    return pos+1 ;
    }

    else{
    return -1;
    }
}

int main(){

    Node* head;

    head= takeinput();

    int i;

    i= searchnode(head, 20);

    if(i >0){

    cout<<"Match found at "<< i<< endl;
    }

    else
    cout<<"Match not found"<<endl;


}