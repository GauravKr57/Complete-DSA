#include<bits/stdc++.h>
using namespace std;

// RECURSION

int uniquePaths(int m, int n)
{
    if(m == 0 && n == 0) return 1;

    if(m < 0 || n < 0) return 0;

    return uniquePaths(m-1,n) + uniquePaths(m,n-1);
    
}

// MEMOIZATION

int memo[m][n] = {-1};

int solve(int m, int n)
{
    if(m == 0 && n == 0)return 1;
    
    if(m<0 || n<0) return 0;

    if(dp[m][n] != -1) return dp[m][n];

    return dp[m][n] = solve(m-1,n)+solve(m,n-1);
}

// TABUATION

int findAllPaths(int m, int n)
{
    int dp[m][n];

    for(int i=0;i<m;i++)
    {
        dp[i][0] = 1;
    }
    for(int j=0;j<n;j++)
    {
        dp[0][j] = 1;
    }

    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    return dp[m][n];
}

int main(){

    

    return 0;
}