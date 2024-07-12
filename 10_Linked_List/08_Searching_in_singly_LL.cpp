#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data= x;
        next= NULL;
    }
}

// ITERATIVE SEARCH

int search(Node *head, int x){

    int pos=1;
    Node *curr= head;

    while(curr != NULL){
        if(curr->data == x){
            return pos;
        }
        pos++;
        curr= curr->next;
    }

    return -1;

}


// RECURSIVE SEARCH

int Search(Node *head, int x){

    if(head == NULL)return -1;
    if(head->data == x)return 1;

    else{
        int res= Search(head->next,x);
        if(res==-1){
            return -1;
        }
        else{
            return res+1;
        }
    }

}

int main(){

    

    return 0;
}