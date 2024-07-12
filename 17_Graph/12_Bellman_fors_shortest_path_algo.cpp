#include<bits/stdc++.h>
using namespace std;


void print(vector<int> v)
{
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

// BELLMAN FORD ALGORITHM

void BellmanFord(vector<vector<int>> edges, int V, int s)
{
    vector<int> dist(V,INT_MAX);

    dist[s] = 0;

    for(int count=0 ; count<V-1 ; count++)
    {
        for(auto x : edges)
        {
            int  u = x[0];
            int  v = x[1];
            int wt = x[2];

            if(dist[u] != INT_MAX && dist[v] > dist[u] + wt)
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // To detect negative cycle

    for(auto x : edges)
    {
        int u = x[0];
        int v = x[1];
        int w = x[2];

        if(dist[u] != INT_MAX && dist[v] > dist[u]+w)
        {
            cout<<"Negative cycle Detected"<<endl;
        }
    }

    print(dist);
}


int main(){

    

    return 0;
}