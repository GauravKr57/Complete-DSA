#include<bits/stdc++.h>
using namespace std;

    int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        
        long long m =pow(10,9)+7;
        long long x=a*b;
        
        return ((a%m)*(b%m))%m;
        
    }

int main(){

    

    return 0;
}