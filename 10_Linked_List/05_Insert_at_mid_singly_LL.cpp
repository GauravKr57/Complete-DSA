#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node *insertatPos(Node *head, int pos, int data){

    Node *temp = new Node(data);

    if(pos==1){
        temp -> next = head;
        return temp;
    }

    Node *curr= head;

    for(int i=1;i<=pos-2 && curr!=NULL;i++){
        curr= curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;

}

int main(){

    

    return 0;
}