#include<bits/stdc++.h>
using namespace std;


// Total number of BSTs problem has same result as CATALAN Numbers

int nthCatalanNumber(int n)
{
    int dp[n+1] = {0};
    dp[0] = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            dp[i] += dp[j]*dp[i-j-1];
        }
    }

    return dp[n];
}


int main(){

    

    return 0;
}