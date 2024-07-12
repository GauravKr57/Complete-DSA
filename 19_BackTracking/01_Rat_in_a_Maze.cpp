#include<bits/stdc++.h>
using namespace std;

bool isSafe(int i, int j, int n, int maze[n][n])
{
    return (i<n && j<n && maze[i][j] == 1);
}

void print(int arr[n][n], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool solveMazeRec(int i, int j,int n, int maze[n][n], int sol[n][n])
{
    if(i==n-1 && j==n-1)
    {
        sol[i][j] = 1;
        return true;
    }

    if(isSafe(i,j,n,maze))
    {
        sol[i][j] = 1;

        if(solveMazeRec(i+1, j, n, maze, sol) == true){
            return true;
        }
        else if(solveMazeRec(i, j+1, maze, sol) == true){
            return true;
        }
        else{
            sol[i][j] = 0;
        }
    }

    return false;
}

bool solveMaze(int maze[n][n], int n)
{
    int sol[n][n] = {0};

    if(solveMazeRec(0,0,n,maze,sol) == false)
    {
        return false;
    }
    else
    {
        print(sol,n);
        return true;
    }
}

int main(){

    

    return 0;
}