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


// METHOD 1: Inorder traversal

void inorder(Node *root, vector<int> &v)
{
    if(root)
    {
        inorder(root->left,v);
        v.push_back(root->key);
        inorder(root->right,v);
    }
}

bool find(Node *root, int sum)
{
    vector<int> v;

    inorder(root,v);

    int i=0, j = v.size()-1;

    while(i < j)
    {
        if(v[i]+v[j] == sum){
            return true;
        }
        else if(v[i]+v[j] < sum){
            i++;
        }
        else{
            j--;
        }
    }

    return true;
}


// METHOD 2

bool isPair(Node *root, int sum, unordered_set<int> &s)
{
    if(root == NULL){
        return false;
    }

    if(isPair(root->left, sum, s) == true){
        return true;
    }

    if(s.find(sum - root->key) != s.end()){
        return true;
    }
    s.insert(root->key);

    return isPair(root->right, sum, s);

}

int main(){

    

    return 0;
}