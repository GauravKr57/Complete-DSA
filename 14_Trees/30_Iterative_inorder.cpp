#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int d)
    {
        key = d;
        left = right = NULL;
    }
};


// ITERATIVE INORDER TRAVERSAL

void inorder(Node *root)
{
    stack<Node *> s;

    Node *curr = root;

    while(curr != NULL || s.empty()==false)
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout<< (curr->key)<<" ";

        curr = curr->right;
    }
}

int main(){

    

    return 0;
}