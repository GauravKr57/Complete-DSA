#include<bits/stdc++.h>
using namespace std;

//DOUBY LINKED LIST CONTAINS EXTRA POINTER prev EACH NODE IS LINKED TO PREVIOUS NODE IN ADDITION TO NNEXT NODE

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

int main(){

    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp;
    temp->prev = head;
    temp->next = temp2;
    temp2->prev = temp;

    return 0;
}