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

// USING for LOOP

void printList(Node *head){

    if(head == NULL) return;

    cout<<head->data<<" ";

    for(Node *curr=head->next; curr!=head; curr=curr->next){
        cout<<curr->data<<" ";
    }

}

// USING do-while LOOP

void print(Node *head){

    if(head == NULL) return;

    Node *p = head;

    do
    {  
        cout<<p->data<<" ";
        p = p->next;

    } while (p != head);
    
}


int main(){

    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(25);
    head->next->next->next->next = head;

    print(head);
    cout<<endl;
    printList(head);
    

    return 0;
}