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

Node *printNthfromLast(Node *head, int n){

    int size = 0;
    Node *curr;
    for(curr=head; curr!=NULL; curr=curr->next){
        size++;
    }

    if(size < n) return;

    // We wish to print size-n+1 th node from beginning 

    curr=head;
    for(int i=1;i<size-n+1;i++){
        curr = curr->next;
    }

    cout<< (curr->data);

}

//EFFICIENT

// Maintain two pointers main_ptr and ref_ptr
// Move ref_ptr to the Nth node from the start
// Now move both main_ptr and ref_ptr, until the ref_ptr reaches the last node
// Now print the data of the main_ptr, as it is at the Nth node from the end

void nthEnd(Node *head, int n){

    Node *first = head;
    for(int i=0;i<n;i++){

        if(first == NULL) return;
        head = head->next;
    }

    Node *second = head;
    while(first != NULL){
        second = second->next;
    }

    cout<<(second->data);

}

int main(){

    

    return 0;
}