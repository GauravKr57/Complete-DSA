#include<bits/stdc++.h>
using namespace std;

// LINKED LIST HAVE BETTER INSERTION AND DELETION WHILE WORSE RANDOM ACCSESS COMPARED TO ARRAYS

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
}

int main(){

    Node *head = new Node(10);

    head -> next = new Node(20);
    head -> next -> next = new Node(35);

    return 0;
}