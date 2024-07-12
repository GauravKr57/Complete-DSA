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


// NAIVE: USing stack data structure

bool checkPalindrome(Node *head){

    stack<char> st;

    for(Node *curr=head; curr!=NULL; curr=curr->next){
        st.push(curr->data);
    }

    for(Node *curr=head; curr!=NULL; curr=curr->next){
        
        if(st.top() != curr->data){
            return false;
        }
        st.pop();
    }

    return true;
}


// EFFCIENT

bool check_Palindrome(Node *head){

    if(head == NULL) return true;

    // finding middle

    Node *slow = head, *fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    //reverse after middle

    Node *second = reverseList(slow->next);

    // check palindrome

    Node *curr = head;

    while(second != NULL){
        if(curr->data != second->data){
            return false;
        }
        second  = second->next;
        curr = curr->next;
    }

    return true;
}

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