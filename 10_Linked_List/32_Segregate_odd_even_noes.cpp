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

//The idea is to split the linked list into two:  one containing all even nodes and the other containing all odd nodes. And finally, attach the odd node linked list after the even node linked list. 

Node *segregate(Node *head){

    Node *es=NULL, *ee=NULL, *os=NULL, *oe=NULL;

    for(Node *curr=head; curr!=NULL; curr=curr->next){

        int x = curr->data;

        if(x%2 == 0){
            if(es == NULL){
                es=ee=curr;
            }
            else{
                ee->next = curr;
                ee = curr;
            }
        }
        else{
            if(os == NULL){
                os=oe=curr;
            }
            else{
                oe->next = curr;
                oe = curr;
            }
        }
    }

    if(os==NULL || oe==NULL){
        return head;
    }

    ee->next = os;
    oe->next = NULL;

    return es;

}

int main(){

    

    return 0;
}