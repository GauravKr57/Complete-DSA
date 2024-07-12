#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// ITERATIVE

void printList(Node *head)
{
    while(head != NULL){
        cout<< (head -> data)<<" ";
        head = head -> next;
    }
}

//RECURSIVE

void rPrint(Node *head)
{
    if(head == NULL){
        return;
    }
    cout<<(head -> data)<<" ";
    rPrint(head -> next);
}

int main(){

    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next ->next = new Node(30);
    head -> next ->next ->next = new Node(40);

    printList(head);
    cout<<endl;
    printList(head);
    cout<<endl;

    rPrint(head);

    return 0;
}