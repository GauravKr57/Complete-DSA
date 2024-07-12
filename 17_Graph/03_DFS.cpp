#include<bits/stdc++.h>
using namespace std;

// SIMPLE IMPLEMENTATION

void DFSrec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;

    cout<<s<<" ";

    for(int u : adj[s])
    {
        if(visited[u] == false)
        {
            DFSrec(adj,u,visited);
        }
    }
}

void DFS(vector<int> adj, int v, int s)
{
    bool visited[v] = {false};

    DFSrec(adj,s,visited);
}



// FOR DISCONNECTED GRAPHS

void Dfs(vector<int> adj ,int v)
{
    bool visited[v];

    for(int i=0;i<v;i++)
    {
        visited[i] = false;
    }

    for(int i=0;i<v;i++)
    {
        if(visited[i] == false)
        {
            DFSrec(adj,i,v);
        }
    }
}


int main(){

    

    return 0;
}