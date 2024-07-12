#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *delHead(Node *head){

    if(head == NULL){
        return NULL;
    }
    Node *temp = head->next;
    delete head;

    return temp;

}

int main(){

    

    return 0;
}