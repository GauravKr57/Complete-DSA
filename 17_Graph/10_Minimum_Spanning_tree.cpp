#include<bits/stdc++.h>
using namespace std;

// USING prims algorithm (NAIVE : adj matrix)

int minimumSpanning(vector<vector<int>> graph, int v)
{
    int res = 0;

    vector<int> key(v,INT_MAX);
    key[0] = 0;
    
    bool mSet[v] = {false};

    for(int count=0;count<v;count++)
    {
        int u = -1;

        for(int i=0;i<v;i++)
        {
            if(mSet[i] == false && (u == -1 || key[i] < key[u]))
            {
                u = i;
            }
        }

        mSet[u] = true;
        res = res+key[u];

        for(int x=0; x<v; x++)
        {
            if(graph[u][x] != 0 && mSet[x] == false)
            {
                key[x] = min(key[x], graph[u][x]);
            }
        }

    }

    return res;
}



// EFFICIENT (adjacency List)

int spanningTree(vector<pair<int,int>> adj[], int v)
{

    int res = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> pq;

    pq.push({0,0});

    vector<bool> inMST(v,false);

    vector<int> key(v,INT_MAX);
    key[0] = 0;

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;

        for(auto x:adj[u])
        {
            int y = x.first;
            int weight = x.second;

            if(mst[y] == false && weight < key[y])
            {
                key[y] = weight;
                pq.push({weight,y});
            }
        }
    }

    for(int i=0;i<v;i++)
    {
        res += key[i];
    }

    return res;
}


int main(){

    

    return 0;
}