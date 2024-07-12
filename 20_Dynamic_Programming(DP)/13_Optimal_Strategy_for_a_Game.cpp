#include<bits/stdc++.h>
using namespace std;

// RECURSIVE

int solveRec(int arr[], int i, int j)
{
    if(j == i+1)
    {
        return max(arr[i],arr[j]);
    }

    return   max(
                  arr[i] + min( solveRec(arr,i+2,j) , solveRec(arr, i+1,j-1) ),
                  arr[j] + min( solveRec(arr,i+1,j-1) , solveRec(arr,i,j-2) )                
                );
}

int optimalStrategy(int arr[], int n)
{
    return solve(arr, 0, n-1);
}


// DP : TABULATION

int maxVal(int arr[], int n)
{
    int dp[n][n];

    for(int i=0;i<n-1;i++)
    {
        dp[i][i+1] = max(arr[i], arr[i+1]);
    }

    for(int gap = 3; gap<n ; gap = gap+2)
    {
        for(int i=0; i+gap<n; i++)
        {
            int j = i+gap;

            dp[i][j] = max( (arr[i] +  min( dp[i+2][j], dp[i+1][j-1])), (arr[j] + min(dp[i+1][j-1], dp[i][j-2])));
        }
    }

    return dp[0][n-1];
}


//  IF THE ARRAY CAN BE ODD OR EVEN BOTH ONLY BELOW CODE WILL WORK

int solve(int arr[], int i, int j, vector<vector<int>> &dp)
{
    if(i > j){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    dp[i][j] = max( (arr[i] + min(solve(arr, i+1, j-1) , solve(arr, i+2, j))), (arr[j] + min(solve(arr, i+1, j-1), solve(arr, i, j-2))));

    return dp[i][j];
}

int startegy(int arr[], int n)
{
    vector<vector<int>> dp(n, vector<int>(n,-1));

    return solve(arr, 0, n-1, dp);
}


int main(){

    

    return 0;
}