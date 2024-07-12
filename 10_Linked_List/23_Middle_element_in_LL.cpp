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

void printMiddle(Node *head){

    if(head == NULL) return;

    int size=0;
    Node *curr;

    for(curr=head; curr!=NULL; curr=curr->next){
        size++;
    }

    curr = head;
    for(int i=0; i<size/2; i++){
        curr = curr->next;
    }

    cout<<curr->data;

}

// EFFICIENT

void printMid( Node *head){

    if(head==NULL) return;

    Node *slow = head;
    Node *fast = head;

    while(fast == NULL && fast->next == NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<<slow->data;

}

int main(){

    

    return 0;
}