#include <bits/stdc++.h>

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

void print(Node *head)
{

    while (head->next != NULL)
    {

        cout << head->data << " ----> ";
        head = head->next;
    }
}

int main()
{

    Node n1(10), n2(20), n3(30), n4(40), n5(50);

    Node *head = &n1;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);

    return 0;
}