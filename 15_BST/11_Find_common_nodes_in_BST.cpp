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


// CODE

void inorder(Node *root, vector<int> &v)
{
    if(root)
    {
        inorder(root->left,v);
        v.push_back(root->key);
        inorder(root->right);
    }
}

vector<int> findCommon(Node *root1,Node *root 2)
{
    vector<int> ans;
    vector<int> v1,v2;

    inorder(root1,v1);
    inorder(root2,v2);

    int i=0, j=0;
    int n=v1.size(), m=v2.size();

    while(i<n && j<m)
    {
        if(v1[i] == v2[j]){
            ans.push_back(v1[i]);
            i++;
            j++;
        }
        else if(v1[i] < v2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    return ans;

}

int main(){

    

    return 0;
}