#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *insertEnd(Node *head, int data){
    node *temp = new Node(data);
    if(head == NULL)
    return temp;

    Node *curr= head;
    while(curr->next != NULL){
        curr= curr->next;
    }
    curr->next = temp;
    temp->prev = curr;

    return head;
}

int main(){

    

    return 0;
}