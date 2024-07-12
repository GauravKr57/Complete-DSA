#include<bits/stdc++.h>
using namespace std;

// DP


// Using formula nCr = n-1Cr-1 + n-1Cr

int nCr(int n, int r)
{
    int dp[n+1][r+1];

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=min(i,r) ; j++)
        {
            if(j == 0 || j == i)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
    }

    return dp[n][r];
}

int main(){

    

    return 0;
}