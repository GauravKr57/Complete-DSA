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

Node *reverseDLL(Node *head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *temp = NULL;
    Node *curr = head;

    while(curr != NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }

    return temp->prev;  //Modified head(last node of origial DLL)

}

int main(){

    

    return 0;
}