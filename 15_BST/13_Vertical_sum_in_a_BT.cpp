#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

// We need to check the Horizontal Distances from the root for all nodes. If two nodes have the same Horizontal Distance (HD), then they are on the same vertical line.

void verticalSum(Node *root, int hd, map<int,int> &mp)
{
    if(root == NULL) return;

    verticalSum(root->left, hd-1, mp);

    mp[hd] += root->key;

    verticalSum(root->right, hd+1, mp);
}

void printVerticalSum(Node *root)
{
    map<int,int> m;

    verticalSum(root, 0, m);

    for(auto it : m)
    {
        cout<<m.second<<" ";
    }
}

int main(){

    

    return 0;
}