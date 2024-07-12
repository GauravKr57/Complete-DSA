#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

//BEFORE GIVEN NODE

void insertBefore(Node* next_node, int new_data)
{
    // Check if the given next_node is NULL
    if (next_node == NULL) {
        printf("the given next node cannot be NULL");
        return;
    }

    // 1. Allocate new node
    Node* new_node = new Node();

    // 2. Put in the data
    new_node->data = new_data;

    // 3. Make previous of new node as previous of next_node
    new_node->prev = next_node->prev;

    // 4. Make the previous of next_node as new_node
    next_node->prev = new_node;

    // 5. Make next_node as next of new_node
    new_node->next = next_node;

    // 6. Change next of new_node's previous node
    if (new_node->prev != NULL)
        new_node->prev->next = new_node;
    else
        head = new_node;
}


//AFTER GIVEN NODE

void insertAfter(Node* prev_node, int new_data)
{
    // Check if the given prev_node is NULL
    if (prev_node == NULL) {
        cout << "the given previous node cannot be NULL";
        return;
    }

    // 1. allocate new node
    Node* new_node = new Node();

    // 2. put in the data
    new_node->data = new_data;

    // 3. Make next of new node as next of prev_node
    new_node->next = prev_node->next;

    // 4. Make the next of prev_node as new_node
    prev_node->next = new_node;

    // 5. Make prev_node as previous of new_node
    new_node->prev = prev_node;

    // 6. Change previous of new_node's next node
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

int main(){

    

    return 0;
}