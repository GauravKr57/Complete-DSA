#include<bits/stdc++.h>
using namespace std;

// The BFS traversal of Graphs also traverses the graph in levels. It starts the traversal with a given vertex, visits all of the vertices adjacent to the initially given vertex and pushes them all to a queue in order of visiting. Then it pops an element from the front of the queue, visits all of its neighbours and pushes the neighbours which are not already visited into the queue and repeats the process until the queue is empty or all of the vertices are visited.

// The BFS traversal uses an auxiliary boolean array say visited[] which keeps track of the visited vertices. That is if visited[i] = true then it means that the i-th vertex is already visited.


// SIMPLE IMPLEMENTATION

void printBFS(vector<int> adj[], int v, int s)
{
    bool visited[v+1];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }

    queue<int> q;
    visited[s] = true;
    q.push(s);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";

        for(int v : adj[u])
        {
            if(visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}


// FOR DISCONTINUED GRAPH WHERE SOURCE IS NOT DEFINED

void BFS(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    q.push(s);


    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";

        for(int v : adj[u])
        {
            if(visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void BFSdis(vector<int> adj[], int v)
{
    bool visited[v+1] = {false};

    for(int i=0;i<v;i++)
    {
        if(visited[i] == false)
        {
            BFS(adj,i,visited);
        }
    }
}

int main(){

    

    return 0;
}