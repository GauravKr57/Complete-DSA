#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;

    Node(int d)
    {
        key = d;
        next = NULL;
    }
};

struct TreeNode
{
    int key;
    TreeNode *left, *right;

    TreeNode(int d)
    {
        key = d;
        left = right = NULL;
    }
};

// CODE

void covert(Node *head, TreeNode *root)
{
    if(head == NULL) return;

    Node *curr = head;
    vector<TreeNode *> v;

    while(curr != NULL)
    {
        TreeNode *temp = new TreeNode(curr->data);
        v.push_back(temp);
        curr = curr->next;
    }

    int n = v.size();

    for(int i=0;i<n/2;i++)
    {
        if(2*i+1 < n){
            v[i]->left = v[2*i+1];
        }
        if(2*i+2 < n){
            v[i]->right = v[2*i+2];
        }
    }

    root = v[0];

}

int main(){

    

    return 0;
}