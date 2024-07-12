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


// LOWEST COMMON ANCESTOR (LCA) 

// WORSE METHOD

bool findPath(Node *root, vector<Node *> &p, int k)
{
    if(root == NULL){
        return false;
    }

    p.push_back(root);

    if(root->key == k){
        return true;
    }

    if((root->left && findPath(root->left, path, k)) || 
        (root->right && findPath(root->right, path, k))){
        return true;
        }

    p.pop_back();

    return false;

}


Node *lca(Node *root, int n1, int n2)
{
    vector<Node *> path1,path2;

    if(findPath(root, path1, n1)==false || findPath(root, path2, n2)==false){
        return NULL;
    }

    for(int i=0; i<path1.size()-1 && i<path2.size()-1; i++)
    {
        if(path1[i+1] != path2[i+1]){
            return path1[i];
        }
    }

    return NULL;

}

int main(){

    

    return 0;
}