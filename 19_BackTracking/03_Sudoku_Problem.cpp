#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, int x, int grid[N][N])
    {
        for(int i=0;i<N;i++)
        {
            if(grid[row][i] == x || grid[i][col] == x){
                return false;
            }
        }
        
        int rs = row-row%3;
        int cs = col-col%3;
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(grid[rs+i][cs+j] == x){
                    return false;
                }
            }
        }
        
        return true;
    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(grid[i][j] == 0)
                {
                    for(int x=1;x<=9;x++)
                    {
                        if(isSafe(i,j,x,grid))
                        {
                            grid[i][j] = x;
                            
                            if(SolveSudoku(grid) == true){
                                return true;
                            }
                            
                            else{
                                grid[i][j] = 0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        
        return true;
        
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout<<grid[i][j]<<" ";
            }
        }
    }

    
int main(){

    int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 }, 
					{ 5, 2, 0, 0, 0, 0, 0, 0, 0 }, 
					{ 0, 8, 7, 0, 0, 0, 0, 3, 1 }, 
					{ 0, 0, 3, 0, 1, 0, 0, 8, 0 }, 
					{ 9, 0, 0, 8, 6, 3, 0, 0, 5 }, 
					{ 0, 5, 0, 0, 9, 0, 6, 0, 0 }, 
					{ 1, 3, 0, 0, 0, 0, 2, 5, 0 }, 
					{ 0, 0, 0, 0, 0, 0, 0, 7, 4 }, 
					{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } }; 
	if (solve(grid,N) == true) 
		printGrid(grid); 
	else
		cout << "No solution exists"; 

	return 0; 
}