#include<bits/stdc++.h>
using namespace std;


//NAIVE

void factors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//EFFICIENT but not in sorted order

void divisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i != n/i){
                cout<<n/i<<" ";
            }
        }
    }
    cout<<endl;
}

//EFFICIENT AND IN SORTED ORDER

void printDivisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(int i=sqrt(n);i>0;i--){
        if(n%i==0){
            if(i != n/i)
            cout<<n/i<<" ";
        }
    }
}

int main(){

    factors(35);

    divisors(100);

    printDivisors(100);

    return 0;
}