#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right ;
    Node *nextRight;

    Node(int d)
    {
        key = d;
        left = right = NULL;
        nextRight = NULL;
    }
};


// CONNECT NODES AT SAME LEVEL : use line by line level order traversal

void connect(Node *root)
{
    if(root == NULL) return;

    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        int count = q.size();
        Node *prev = NULL;

        for(int i=0;i<count;i++)
        {   
            Node *curr = q.front();
            q.pop();

            if(prev != NULL){
                prev->nextRight = curr;
            }

            prev = curr;

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}

int main(){

    

    return 0;
}