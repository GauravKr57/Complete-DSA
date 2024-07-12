#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};


// INSERT AT BEGINNING

Node *insertHead(Node *head, int x){

    Node *temp = new Node(x);

    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }

    head->prev->next = temp;  // (last->next = temp)
    temp->prev = head->prev;
    temp->next = head;
    head->prev = temp;

    return temp;

}

// INSERT AT END

Node *insertEnd(Node *head, int x){

    Node *temp = new Node(x);

    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }

    head->prev->next = temp;
    temp->prev = head->prev;   
    temp->next = head;
    head->prev = temp;

    return head;

}


int main(){

    

    return 0;
}