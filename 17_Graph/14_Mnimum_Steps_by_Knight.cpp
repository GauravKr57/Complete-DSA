#include<bits/stdc++.h>
using namespace std;

int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    // 6X6 chessboard
	    
	    int tx = TargetPos[0]-1 , ty = TargetPos[1]-1;
	    int kx = KnightPos[0]-1 , ky = KnightPos[1]-1;
	    
	    if(kx == tx && ky == ty) return 0;
	    
	    vector<vector<bool>> visited(n,vector<bool>(n,false));
	    
	    int steps = 0;
	    
	    queue<pair<int,int>> q;
	    
	    q.push({kx,ky});
	    
	    visited[kx][ky] = true;
	    
	    while(!q.empty())
	    {
	        int size = q.size();
	        steps++;
	        
	        for(int i=0;i<size;i++)
	        {
	            auto p = q.front();
	            q.pop();
	            
	            int xx = p.first;
	            int yy = p.second;
	            
	            int dx[8] = {1,1,-1,-1,2,2,-2,-2};
	            int dy[8] = {2,-2,2,-2,1,-1,1,-1};
	            
	            for(int k = 0 ;k < 8; k++)
	            {
	                int nx = xx + dx[k];
	                int ny = yy + dy[k];
	                
	                if(nx == tx && ny == ty) return steps;
	                
	                if(nx >=0 && nx < n && ny >=0 && ny < n && visited[nx][ny] == false)
	                {
	                    visited[nx][ny] = true;
	                    q.push({nx,ny});
	                }
	            }
	        }
	    }
	    
	    return steps;
	}

int main(){

    

    return 0;
}