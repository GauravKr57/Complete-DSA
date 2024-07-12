#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

//HEAD DELETION

Node *deleteHead(Node *head){

    if(head==NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node *temp = head->next;
    temp->prev = NULL;
    delete head;

    return temp;

}


//TAIL DELETION

Node *delTail(Node *head){

    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node *curr= head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;

    return head;

}



int main(){

    

    return 0;
}