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
    Node *head= NULL;
    Node *tail= NULL;

    while(data != -1){

        Node *newnode = new Node(data);

        if(head==NULL){

            head=newnode;
            tail=newnode;
        }

        else{

            tail->next= newnode;
            tail= newnode;
        }

    

     cin>>data;


    }

  return head;


}

int c=0;

int lengthofLL(Node *head){

    

    if( head = NULL){

        c++;
        return c;

    }

    else{

        c++;

        head=head->next;

        lengthofLL(head);
    }

 return c;
}

int main(){

    Node *head ;

    head= takeinput();

    int i;

    i= lengthofLL(head);

    cout<<"The length of the LL is"<< i;

    return 0;
}