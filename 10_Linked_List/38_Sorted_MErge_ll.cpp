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


Node *mergeSorted(Node *a, Node *b){

    if(a==NULL) return b;
    if(b==NULL) return a;

    Node *head = NULL, *tail = NULL;

    if(a->data <= b->data){
        head=tail=a;
        a = a->next;
    }
    else{
        head=tail=b;
        b = b->next;
    }

    while(a != NULL && b != NULL){

        if(a->data <= b->data){
            tail->next = a;
            tail = tail->next;
            a = a->next;
        }
        else{
            tail->next = b;
            tail = tail->next;
            b = b->next;
        }

    }

    if(a == NULL){
        tail->next = b;
    }
    else{
        tail->next = a;
    }

    return head;

}

int main(){

    

    return 0;
}