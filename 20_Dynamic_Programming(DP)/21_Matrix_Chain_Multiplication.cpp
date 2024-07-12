#include<bits/stdc++.h>
using namespace std;

// RECURSION

int minMultiplication(int arr[], int i, int j)
{
    if(j == i+1) return 0;

    if(j == i+2)
    {
        return arr[i]*arr[i+1]*arr[i+2];
    }

    int res = INT_MAX;

    for(int k=i+1;k<j;k++)
    {
        res = min(res, minMultiplication(arr, i, k) + minMultiplication(arr, k, j) + arr[i]*arr[k]*arr[j] );
    }

    return res;
}

// MEMOIZATION

int solve(int arr[], int i, int j, vector<vector<int>> &dp)
{
    if(j == i+1){
        return 0;
    }

    if(j == i+2)
    {
        return arr[i]*arr[i+1]*arr[i+2];
    }

    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int res = INT_MAX;

    for(int k=i+1;k<j;k++)
    {
        res = min(res, solve(arr, i, k, dp) + solve(arr, k, j, dp) + arr[i]*arr[k]*arr[j]);
    }

    return dp[i][j] = res;
}

int matrixMultiplication(int arr[], int n)
{
    vector<vector<int>> dp(n, vector<int>(n, -1));

    return solve(arr, 0, n-1, dp);
}


// TABULATION


int efficientMatrixMultiplication(int arr[], int n)
{
    int dp[n][n];

    for(int i=0;i<n;i++){
        dp[i][i+1] = 0;
    }

    for(int gap = 2; gap<n ; gap++)
    {
        for(int i=0; i+gap<n; i++)
        {
            int j = i+gap;

            dp[i][j] = INT_MAX;

            for(int k=i+1; k<j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + arr[i]*arr[k]*arr[j] );
            }
        }
    }

    return dp[0][n-1];
}



int main(){

    

    return 0;
}