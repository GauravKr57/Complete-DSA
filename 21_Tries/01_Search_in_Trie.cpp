#include<bits/stdc++.h>
using namespace std;

// STRUCTURE OF TRIE

struct TrieNode()
{
    TrieNode * child[26];
    bool isEnd;

    TrieNode()
    {
        isEnd = false;

        for(int i=0;i<26;i++){
            child[i] = NULL;
        }
    }
};

// Search

TrieNode *root;

bool search(string &key)
{
    TrieNode *curr = root;

    for(int i=0;i<key.length();i++)
    {
        int index = key[i]-'a';

        if(curr->child[index] == NULL){
            return false;
        }

        curr = curr->child[index];
    }

    return curr->isEnd == true;
}

int main(){

    

    return 0;
}