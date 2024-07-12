#include<bits/stdc++.h>
using namespace std;

// RECURSION

int maxCuts(int l, int a, int b, int c)
{
    if(l < 0) return -1;

    if(l == 0) return 0;

    int res = max({maxCuts(l-a,a,b,c), maxCuts(l-b,a,b,c), maxCuts(l-c,a,b,c)});

    if(res == -1){
        return res;
    }
    else{
        return res+1;
    }
}

// DP: TABULATION

int maximiseCuts(int n, int a, int b, int c)
{
    int dp[n+1];

    dp[0] = 0;

    for(int i=1;i<=n;i++)
    {
        dp[i] = -1;

        if(i-a >= 0)
        {
            dp[i] = max(dp[i], dp[i-a]);
        }
        if(i-b >=  0)
        {
            dp[i] = max(dp[i], dp[i-b]);
        }
        if(i-c >= 0)
        {
            dp[i] = max(dp[i], dp[i-c]);
        }

        if(dp[i] != -1){
            dp[i]++;
        }
    }

    return dp[n];
}

int main(){

    

    return 0;
}