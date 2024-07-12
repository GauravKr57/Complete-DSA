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

// NAIVE

Node *reverse(Node *head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    vector<int> arr;

    for(Node *curr=head; curr!= NULL; curr=curr->next){
        arr.push_back(curr->data);
    }

    for(Node *curr=head; curr!=NULL; curr=curr->next){
        curr->data = arr.back();
        arr.pop_back();
    }

    return head;

}


// EFFICENT (Three pointer approach)

Node *reverseList(Node *head){

    Node *curr = head;
    Node *before = NULL;
    Node *after = NULL;

    while(curr != NULL){

        after = curr->next;
        curr->next = before;
        before = curr;
        curr = after;

    }

    return before;
}

int main(){

    

    return 0;
}