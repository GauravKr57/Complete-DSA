#include<bits/stdc++.h>
using namespace std;

bool pathExists(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> visited(n,vector<bool>(m,false));

    queue<pair<int,int>> q;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j] == 1)
            {
                q.push({i,j});
                visited[i][j] = true;
                break;
            }
        }
    }

    while(!q.empty())
    {
        auto p = q.front();
        q.pop();

        int xx = p.first;
        int yy = p.second;

        int dx[4] = {0,0,-1,1};
        int dy[4] = {-1,1,0,0};

        for(int i=0;i<4;i++)
        {
            int nx = xx+dx[i];
            int ny = yy+dy[i];

            if(nx>=0 && nx<n && ny>=0 && ny<m && visited[nx][ny] == false && grid[nx][ny] != 0)
            {
                if(grid[nx][ny] == 2){
                    return true;
                }

                visited[nx][ny] = true;
                q.push({nx,ny});
            }
        }

    }

    return false;

}

int main(){

    

    return 0;
}