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

// Method 1 : Super easy see from copy

Node *reverseList(Node *head){

    if(head == NULL || head->next==NULL){
        return head;
    }

    Node *rest_head = reverseList(head->next);
    
    Node *rest_tail = head->next;
    rest_tail->nxet = head;
    head->next = NULL;

    return rest_head;

}

int main(){

    

    return 0;
}