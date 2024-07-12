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

void bottomview(Node *root)
{
    map<int,int> mp;

    queue<pair<Node*,int>> q;

    q.push({root,0});

    while(!q.empty())
    {
        auto p = q.front();
        q.pop();

        Node *curr = p.first;
        int hd = p.second;

        mp[hd] = curr->key;

        if(curr->left != NULL){
            q.push({curr->left,hd-1});
        }
        if(curr->right != NULL){
            q.push({curr->right,hd+1});
        }
    }

    for(auto x:mp)
    {
        cout<<x.second<<" ";
    }
}

int main(){

    

    return 0;
}