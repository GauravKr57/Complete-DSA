#include<bits/stdc++.h>
using namespace std;

struct TrieNode
{
    TrieNode *child[2];

    TrieNode()
    {
        child[0] = NULL;
        child[1] = NULL;
    }
};


bool insert(TrieNode *root,bool mat[][], int row, int col)
{
    TrieNode *curr = root;
    bool flag = false;

    for(int i=0; i<col; i++)
    {
        int index = mat[row][i];

        if(curr->child[index] == NULL)
        {
            curr->child[index] = new TrieNode();
            flag = true;
        }

        curr = curr->child[index];
    }

    return flag;
}

int countDistinctRows(bool mat[][], int row, int col)
{
    TrieNode *root = new TrieNode();
    int res = 0;

    for(int i=0;i<row;i++)
    {
        if(insert(root, mat, i, col) == true)
        {
            res++;
        }
    }

    return res;
}

int main(){

    

    return 0;
}