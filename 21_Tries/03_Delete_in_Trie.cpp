#include<bits/stdc++.h>
using namespace std;

struct TrieNode()
{
    TrieNode* child[26];
    bool isEnd;

    TrieNode()
    {
        isEnd = false;
        for(int i=0;i<26;i++)
        {
            child[i] = NULL;
        }
    }
};


// DELETE

bool isEmpty(root)
{
    for(int i=0;i<26;i++)
    {
        if(root->child[i] != NULL){
            return false;
        }
    }
    return true;
}

TrieNode *delKey(TrieNode *root, string &key, int i)
{
    if(root == NULL) return NULL;

    if(i == key.length())
    {
        root->isEnd = false;

        if(isEmpty(root) == true)
        {
            delete(root);
            root = NULL;
        }
    }

    int index = key[i]-'a';

    root->child[index] = delKey(root->child[index] , key , i+1);

    if(isEmpty(root) && root->isEnd == false)
    {
        delete(root);
        root = NULL;
    }

    return root;
}

int main(){

    

    return 0;
}