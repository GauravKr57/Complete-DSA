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

Node *surtedInsert(Node *head, int x){

    Node *temp = new Node(x);

    if(head==NULL || head->data > x){

        temp->next = head;
        return temp;
    }

    Node *curr = head;

    while((curr->next->data < x) && (curr->next != NULL)){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;

    return head;

}

int main(){

    

    return 0;
}