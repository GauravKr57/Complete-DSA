#include<bits/stdc++.h>
using namespace std;

// KOSARAJU's ALGORITHM

void dfsStack(vector<int> adj[], int s, bool visited[], stack<int> &st)
{
    visited[s] = true;

    for(int u : adj[s])
    {
        if(visited[u] == false)
        {
            dfsStack(adj, u, visited, st);
        }
    }

    st.push(s);
}

void dfs(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;

    for(int u:adj[s])
    {
        if(visited[u] == false)
        {
            dfs(adj, u, visited);
        }
    }
}


int Kosaraju(vector<int> adj[], int V)
{

    // Step 1 // ELEMENTS ARE ARRANGED IN DECREASING ORDER OF FINISH TIME IN STACK

    bool visited[V] = {false};
    stack<int> st;

    for(int i=0;i<V;i++)
    {
        if(visited[i] == false)
        {
            dfsStack(adj, i, visited, st);
        }
    }

    // Step 2 // Graph is reversed

    vector<int> adjT[V];

    for(int u=0 ; u<V ; u++)
    {
        for(int v : adj[u])
        {
            adjT[v].push_back(u);
        }
    }

    // return scc count

    bool vis[V] = {false};

    int scc = 0;

    while(!st.empty())
    {
        int u = st.top();
        st.pop();
     
        if(vis[u] == false)
        {
            scc++;
            dfs(adjT, v, vis);
        }
        
    }

    return scc;

}


int main(){

    

    return 0;
}