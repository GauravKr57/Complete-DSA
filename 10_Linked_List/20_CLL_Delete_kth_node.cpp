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

Node *delHead(Node *head){

    if(head==NULL) return head;
    if(head->next == head){
        delete head;
        return NULL;
    }

    Node *temp = head->next;
    head->data = head->next->data;
    head->next = head->next->next;
    delete temp;

    return head;

}

Node *delKthNode(Node *head, int k){

    if(head == NULL) return NULL;
    if(k==1){
        return delHead(head);
    }

    Node *curr = head;

    for(int i=1; i<k-2; i++){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;

    return head;

}

int main(){

    

    return 0;
}