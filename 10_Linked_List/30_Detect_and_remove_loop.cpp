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

// Steps

// 1. Detect loop using flyd cycle detection. slow and fast pointers meet.
// 2. Move slow pointer to beginning o linked list and keep fast pointer at meeting point
// 3. Now move both pointers one step at a time at same speed. The point where they now meet is fisrt node of loop


void detectAndRemoveloop(Node *head){

    Node *slow = head, *fast = head;

    while(fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }

    }
    if(slow != fast) return;

    slow = head;

    while(slow->next != fast->next){
        slow= slow->next;
        fast= fast->next;
    }

    fast->next = NULL;

}

int main(){

    

    return 0;
}