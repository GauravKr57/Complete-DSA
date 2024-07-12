#include<bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int n, int m, vector<vector<bool>> &visited, vector<vector<int>> &grid)
{
    if(i >= 0 && i < n && j >= 0 && j < m && visited[i][j] == false && grid[i][j] == 1)
    {
        return true;
    }
    return false;
}

void dfs(int i, int j, int n, int m, vector<vector<bool>> &visited, vector<vector<int>> &grid, int &count)
{
    count++;
    visited[i][j] = true;

    if(isValid(i+1,j,n,m,visited,grid))
    {
        dfs(i+1,j,n,m,visited,grid,count);
    }

    if(isValid(i-1,j,n,m,visited,grid))
    {
        dfs(i-1,j,n,m,visited,grid,count);
    }

    if(isValid(i,j+1,n,m,visited,grid))
    {
        dfs(i,j+1,n,m,visited,grid,count);
    }

    if(isValid(i,j-1,n,m,visited,grid))
    {
        dfs(i,j-1,n,m,visited,grid,count);
    }

    if(isValid(i+1,j+1,n,m,visited,grid))
    {
        dfs(i+1,j+1,n,m,visited,grid,count);
    }

    if(isValid(i-1,j+1,n,m,visited,grid))
    {
        dfs(i-1,j+1,n,m,visited,grid,count);
    }

    if(isValid(i-1,j-1,n,m,visited,grid))
    {
        dfs(i-1,j-1,n,m,visited,grid,count);
    }

    if(isValid(i+1,j-1,n,m,visited,grid))
    {
        dfs(i+1,j-1,n,m,visited,grid,count);
    }
}

int findMaxArea(vector<vector<int>> &grid)
{

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> visited(n,vector<bool>(m,false));

    int res = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j] == false && grid[i][j] == 1)
            {   
                int area = 0;
                dfs(i,j,n,m,visited,grid,area);
                res = max(res,area);
            }
        }
    }
    
    return res;
}

int main(){

    

    return 0;
}