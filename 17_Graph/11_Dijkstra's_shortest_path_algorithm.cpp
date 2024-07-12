#include<bits/stdc++.h>
using namespace std;

void shortestDist(vector<pair<int,int>> adj[], int v, int src)
{

    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;

    pq.push({0,src});

    vector<int> dist(v, INT_MAX);

    dist[src] = 0;

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for(auto x : adj[u])
        {
            int v = x.first;
            int weight = x.second;

            if(dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v] , v});
            }
        }
    }

    for(int i=0;i<v;i++)
    {
        cout<<i<<"/t"<<dist[i]<<endl;
    }

}

int main(){

    

    return 0;
}