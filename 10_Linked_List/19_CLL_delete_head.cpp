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

Node *delHead(Node *head){

    if(head == NULL) return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }

    Node *curr = head;
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;

    return curr->next;

}

// EFFICIENT

// simply copy data of 2nd node to 1st node and delete 2nd node

Node *delhead(Node *head){

    if(head == NULL) return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }

    Node *temp = head->next;

    head->data = head->next->data;
    head->next = temp->next;
    delete temp;

    return head;

}

int main(){

    

    return 0;
}