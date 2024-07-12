#include<bits/stdc++.h>
using namespace std;

void convert(vector<vector<int>> grid, int v)
{
    int v = grid.size();

    vector<int> adj[v];

    for(int i=0;i<v;i++)
    {
        for(int j=0 ; j<grid[i].size() ; j++)
        {
            if(grid[i][j] == 1)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
}

int main(){

    

    return 0;
}