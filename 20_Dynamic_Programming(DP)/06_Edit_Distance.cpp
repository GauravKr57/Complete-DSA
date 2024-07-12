#include<bits/stdc++.h>
using namespace std;

// RECURSIVE

int memo[m+1][n+1] = {-1};

int ed(string s1, string s2, int m, int n)
{
    if(m == 0)
    {
        memo[m][n] =  n;
    }
    if(n == 0)
    {
        memo[m][n] = m;
    }

    if(memo[m][n] != -1)
    {
        return memo[m][n];
    }

    if(s1[m-1] == s2[n-1])
    {
        memo[m][n] = ed(s1, s2, m-1, n-1);
    }
    else
    {
        memo[m][n] = 1 + min{ ed(s1, s2, m-1, n) , ed(s1, s2, m, n-1), ed(s1, s2, m-1, n-1)};
    }

    return memo[m][n];
}


// DP : TABULATION

int Ed(string s1, string s2)
{
    int m = s1.length(), n = s2.length();

    int dp[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        dp[i][0] = i;
    }
    for(int j=0;j<=n;j++)
    {
        dp[0][j] = j;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = 1+min(dp[i-1][j] , min(dp[i][j-1] , dp[i-1][j-1]));  // delelte, insert, replace
            }
        }
    }

    return dp[m][n];
}

int main(){

    

    return 0;
}