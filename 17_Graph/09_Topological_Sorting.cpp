#include<bits/stdc++.h>
using namespace std;

void TopologicalSort(vector<int> adj[], int v)
{
    vector<int> indegree(v,0);

    for(int u=0 ; u<v ; u++)
    {
        for(int x : adj[u])
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

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        cout<<u<<" ";

        for(int x : adj[u])
        {
            indegree[x]--;
            if(indegree[x] == 0){
                q.push(x);
            }
        }
    }


}

int main(){

    

    return 0;
}