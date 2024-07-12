#include<bits/stdc++.h>
using namespace std;


bool check(int n){
    if(n==1){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    else if((n%2==0) || (n%3==0)){
            return false;
        }
    for(int i=5; i*i<=n; i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

//NAIVE

void se(int n){
    for(int i=2;i<=n;i++){
        if(check(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//OPTIMISED CODE

void sieve(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//OPTIMISED SHORTER CODE

void sieveOfErathosthenes(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    cout<<endl;
}

int main(){

    se(10);
    se(25);
    se(101);

    sieve(10);
    sieve(25);
    sieve(101);

    sieveOfErathosthenes(10);
    sieveOfErathosthenes(25);
    sieveOfErathosthenes(101);

    return 0;
}