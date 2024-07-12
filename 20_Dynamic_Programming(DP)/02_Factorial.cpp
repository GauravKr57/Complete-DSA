#include<bits/stdc++.h>
using namespace std;

// MEMOIZATION

int memo[n+1] = {-1};

int fact(int n)
{
    if(memo[n] == -1)
    {   
        int res;

        if(n == 0){
            res = 1;
        }
        else{
            res = n*fact(n-1);
        }

        memo[n] = res;
    }

    return memo[n];
}

// TABULATION

int factorial(int n)
{
    int f[n+1];

    f[0] = 1;

    for(int i=1; i<=n; i++)
    {
        f[i] = i*f[i-1];
    }

    return f[n];
}

int main(){

    

    return 0;
}