#include<bits/stdc++.h>
using namespace std;


// USING BFS

void BFS(vetor<int> adj[], int s, bool visited[])
{
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v : adj[u])
        {
            is(visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int countDis(vector<int> adj[], int v)
{
    bool visited[v+1] = {false};

    int count = 0;

    for(int i=0;i<v;i++)
    {
        if(visited[i] == false)
        {
            count++;
            BFS(adj,i,visited);
        }
    }
}


// USING DFS

void DFSrec(vector<int> adj[], int s, bool visited[])
{

    visited[s] = true;

    for(int u : adj[s])
    {
        if(visited[u] == false)
        {
            DFSrec(adj,u,visited);
        }
    }
}

int countIslands(vector<int> adj[], int v)
{
    bool visited[v] = {false};
    int count = 0;

    for(int i=0;i<v;i++)
    {
        if(visited[i] == false)
        {
            count++;
            DFSrec(adj,i,visited);
        }
    }

    return count;
}



int main(){

    

    return 0;
}