#include<bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {

        this->data = data;
        next = NULL;
    }
};

Node* takeinput(){

    int data;

    cin>>data;
    Node *head =NULL;
    Node *tail = NULL;

    while( data != -1){

        Node *newnode= new Node(data);

        if(head == NULL){

            head= newnode;
            tail= newnode;
        }

        else{
            
            tail->next= newnode;
            tail= newnode;
        }

      cin>>data;
    }
return head;
}

Node * deletenode(Node* head, int i){

    Node *temp = head;

    int count;

    if(i==0){

        head= temp->next;

        delete temp;

        return head;
    }

    while( temp != NULL && count < i-1){
        
        temp= temp->next;
        count++;
    }

    if( temp != NULL){

        Node *a, *b;

        a= temp->next;
        b= a->next;
        temp->next= b;

        delete a;
    }

    return head;
}

Node* insertnode( int data, int i, Node *head){

 Node *newnode = new Node(data);

 Node *temp = head;
 
 int count;

 if(i==0){

     newnode->next= head;
     head = newnode;

     return head;
 }

 while(temp !=NULL && count < i-1){

     temp= temp->next;
     count++;
 }

 if(temp !=NULL){
 newnode->next = temp->next;
 temp->next= newnode;
 }

 return head;

}
void print(Node *head)
{

    while (head != NULL)
    {

        cout << head->data << " ----> ";
        head = head->next;
    }

    cout<<endl<<endl;
}

int main()
{
    Node *head= takeinput();

    print(head);

    head = deletenode(head,0);


    print(head);

    return 0;
}