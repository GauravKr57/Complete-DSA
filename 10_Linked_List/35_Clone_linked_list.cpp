#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *random;
    Node(int x){
        data = x;
        next = NULL;
        random = NULL;
    }
};

// HASHING

Node *clone(Node *h1){

    unordered_map<Node *, Node *> m;

    for(Node *curr=h1; curr !=NULL; curr=curr->next){
        m[curr] = new Node(curr->data);
    }

    for(Node *curr=h1; curr!=NULL; curr=curr->next){
        m[curr]->next = m[curr->next];
        m[curr]->random = m[curr->random];
    }

    return m[h1];

}

int main(){

    

    return 0;
}