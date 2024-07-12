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

void removedup(Node *head){

    if(head == NULL) return;

    Node *curr = head, *temp;

    while(curr->next != NULL){

        if(curr->data == curr->next->data){
            temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else{
            curr=curr->next;
        }

    }

}

int main(){

    

    return 0;
}