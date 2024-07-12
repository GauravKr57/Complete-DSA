#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};

Node *insertBegin(Node*head, int data){
    Node *temp= new Node(data);
    temp->next = head;
    if(head != NULL){
        head->prev = temp;
    }

    return temp;
}


int main(){

    

    return 0;
}