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

Node *pairswap(Node *head){
    Node *curr = head;

    while(curr != NULL && curr->next != NULL){
        swap(curr->data , curr->next->data);
        curr = curr->next->next;
    }

    return head;
}

//EFFICIENT

Node *pairwiseSwap(Node *head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;

    while(curr != NULL && curr->next != NULL){

        prev->next = curr->next;
        prev = curr;
        Node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;

    }
    prev->next = curr;
    return head;

}

int main(){

    

    return 0;
}