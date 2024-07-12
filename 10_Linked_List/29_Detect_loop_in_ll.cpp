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

// With aux space

bool isloop(Node *head){

    unordered_set<Node *> s;

    for(Node *curr=head; curr!=NULL; curr=curr->next){

        if(s.find(curr) != s.end()){
            return true;
        }
        s.insert(curr);
    }

    return false;

}


// EFFICIENT (FLOYD CYCLE DETECCTION)

bool isLoop(Node *head){

    Node *slow = head, *fast = head;

    while(fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;

}

int main(){

    

    return 0;
}