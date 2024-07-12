#include<bits/stdc++.h>
using namespace std;

bool DFSrec(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s] = true;

    for(int u : adj[s])
    {
        if(visited[u] == false)
        {
            if(DFSrec(adj, u, visited, s) == true)
            {
                return true;
            }
        }
        else if(visited[u] == true && u != parent)
        {
            return true;
        }
    }

    return false;
}

bool detectCycle(vector<int> adj[], int v)
{
    bool visited[v] = {false};

    for(int i=0;i<v;i++)
    {
        if(visited[i] == false)
        {
            if(DFSrec(adj,i,visited,-1) == true)
            {
                return true;
            }
        }
    }

    return false;
}

int main(){

    

    return 0;
}