#include <bits/stdc++.h>

using namespace std;

class Node{

    public:

    int data;

    Node* next;

    Node (int data){

        this-> data = data;

        next = NULL;
    }

};

Node* takeinput(){

    int data;

    cin>>data;

    Node *head= NULL;
    Node *tail= NULL;


    while(data != -1){

        Node *newnode = new Node(data);

        if(head == NULL){

            head= newnode;
            tail= newnode;


        }

        else{

            tail->next= newnode;
            tail = newnode;
        }

      cin>>data;
    }

    return head;

}

Node * reverse(Node* head){

    Node *current = head;

    Node *next = NULL;
    Node *prev = NULL;

    while(current != NULL){

        //storing value of next

        next = current ->next;

        // changing the value of next to prev

        current->next = prev;

        //moving the pointers 1 pos ahead

        prev= current;
        current= next;
    }
    
head = prev;
return head;

}

void print(Node* head){

    Node *temp = head;

    while( temp != NULL){
        
        cout<< temp->data<<" ----->";

        temp= temp->next;
      
    }

    cout<<"NULL"<<endl<<endl;

}

int main(){

    Node* head;

    head= takeinput();

    cout<<"Before reversing: "<<endl;

    print(head);

    head = reverse(head);

    cout<<"AFTER REVERSING :"<<endl;

    print(head);

}