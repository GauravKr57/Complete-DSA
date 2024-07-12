#include<bits/stdc++.h>
using namespace std;

// Using RECURSION

int fib(int n)
{
    if(n==0 || n==1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}


// MEMOIZATION

int memo[n+1] = {-1};

int fibn(int n)
{
    if(memo[n] == -1)
    {
        int res;

        if(n == 0 || n == 1){
            res = n;
        }
        else{
            res = fib(n-1) + fib(n-2);
        }

        memo[n] = res;
    }

    return memo[n];
}


// TABULATION

int fibonacci(int n)
{
    int f[n+1];

    f[0] = 0, f[1] = 1;

    for(int i=2 ; i<=n; i++)
    {
        f[i] = f[i-1]+f[i-2];
    }

    return f[n];
}

int main(){

    

    return 0;
}