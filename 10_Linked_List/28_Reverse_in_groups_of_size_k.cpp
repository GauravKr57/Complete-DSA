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

// RECURSIVE

Node *reverseK(Node *head, int k){

    Node *curr = head;
    Node *before = NULL, *after = NULL;
    int count = 0;

    while(curr != NULL  &&   count < k){
        after = curr->next;
        curr->next = before;
        before = curr;
        curr = after;
    }

    if(after != NULL){

        Node *restHead = reverseK(after,k);
        head->next = restHead;
    }

    return before; //new head

}

int main(){

    

    return 0;
}