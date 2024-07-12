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

void findIntersection(Node *h1, Node *h2){

    unordered_set<Node *> s;

    Node *curr1=h1, *curr2=h2;

    while(curr1 != NULL){
        s.insert(curr1);
        curr1 = curr1->next;
    }

    while(curr2 != NULL){

        if(s.find(curr2) != s.end()){
            cout<<curr2->data;
            break;
        }
        curr2 = curr2->next;
    }

}

int main(){

    

    return 0;
}