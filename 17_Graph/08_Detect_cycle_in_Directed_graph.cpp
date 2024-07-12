#include<bits/stdc++.h>
using namespace std;


// USING DFS

void DFS(vector<int> adj[], int s, bool visited[], bool recSt[])
{
    visited[s] = true;
    recSt[s] = true;

    for(int u : adj[s])
    {
        if(visited[u] == false)
        {
            if(DFS(adj, u, visited, recSt) == true){
                return true;
            }
        }
        else if(visited[u] == true && recSt[u] == true){
            return true;
        }
    }

    recSt[s] = false;

    return false;
}

bool detectCycle(vector<int> adj[], int v)
{
    bool visited[v] = {false};
    bool recSt[v] = {false};

    for(int i=0;i<v;i++)
    {
        if(visited[i] == false)
        {
            if(DFS(adj, i, visited, recSt) == true){
                return true;
            }
        }
    }

    return false;
}


// USING KAHN's ALGORITHM (BFS based)

bool isCyclic(vector<int> adj[], int v)
{
    vector<int> indegree(v,0);

    for(int i=0;i<v;i++)
    {
        for(int x:adj[i])
        {
            indegree[x]++;
        }
    }

    queue<int> q;

    for(int i=0;i<v;i++)
    {
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    int count = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int x : adj[u])
        {
            indegree[x]--;
            if(indegree[x] == 0){
                q.push(x);
            }
        }

        count++;
    }

    return (count != v);
}

int main(){

    

    return 0;
}