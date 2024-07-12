#include<bits/stdc++.h>
using namespace std;

void bfs(int i, int j, vector<vector<bool>> &visited , vector<vector<char>> &grid)
    {   
        
        int n = grid.size();
        int m = grid[0].size();
        
        visited[i][j] = true;
        
        queue<pair<int,int>> q;
        
        q.push({i,j});
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            int xx = p.first;
            int yy = p.second;
            
            int dx[8] = {0,0,-1,1,-1,1,-1,1};
            int dy[8] = {1,-1,0,0,-1,1,1,-1};
            
            for(int k=0;k<8;k++)
            {
                int nx = xx+dx[k];
                int ny = yy+dy[k];
                
                if(nx>=0 && nx<n && ny>=0 && ny<m && visited[nx][ny]==false && grid[nx][ny] == '1')
                {
                    visited[nx][ny] = true;
                    q.push({nx,ny});
                }
            }
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int count = 0;
        
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(visited[i][j] == false && grid[i][j] == '1')
                {
                    count++;
                    bfs(i,j,visited,grid);
                }
            }
        }
        
        return count;
        
    }

int main(){

    

    return 0;
}