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

//NAIVE

Node *insertEnd(Node *head, int x){

    Node *temp = new Node(x);
    
    if(head == NULL){
        temp->next = temp;
        return temp;
    }

    Node*curr = head;
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;

    return head;

}


// EFFICIENT (swapping data method)

Node *insertEnd(Node *head, int x){

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

    return temp;

}

int main(){

    

    return 0;
}