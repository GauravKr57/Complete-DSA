#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

// NAIVE

Node *insertHead(Node *head, int x){

    Node *temp = new Node(x);

    if(head == NULL){
        temp->next = temp;
        return temp;
    }

    Node *curr= head;
    while(curr->next != head){
        curr= curr->next;
    }
    curr->next = temp;
    temp->next = head;

    return temp;

}

// EFFICIENT (data swapping method)

// We are not traversing to the last node instead we attach the new node after head and interchange the data of head and the new node.


Node *insertBegin(Node *head, int x){

    Node *temp = new Node(x);

    if(head == NULL){
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;

    int t = head->data;
    head->data = temp->data;
    temp->data = t;

    return head;

}

int main(){

    

    return 0;
}