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

// we will seperately merge left side of mid and right side of mid
// firstly we find mid and write merge function


Node *findMid(Node *head){

    if(head==NULL) return head;

    Node *slow = head, *fast = head;

    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;

}

Node *merge(Node *a, Node *b){

    if(a==NULL) return b;
    if(b==NULL) return a;

    Node *head=NULL, *tail=NULL;

    if(a->data <= b->data){
        head=tail=a;
        a = a->next;
    }
    else{
        head=tail=b;
        b = b->next;
    }

    while(a!=NULL && b!=NULL){

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
    if(a==NULL){
        tail->next = b;
    }
    else{
        tail->next = a;
    }

    return head;

}


Node *mergeSort(Node *head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *mid = findMid(head);

    Node *left=head, *right=mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node *ans = merge(left,right);

    return ans;

}

int main(){

    

    return 0;
}