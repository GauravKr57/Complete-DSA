#include<bits/stdc++.h>
using namespace std;


//Naive
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}

//MOST EFFICIENT CODE 

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

int main(){

    cout<<isPrime(2)<<endl;
    cout<<isPrime(12)<<endl;
    cout<<isPrime(19)<<endl;
    cout<<isPrime(1021)<<endl;
    cout<<isPrime(1)<<endl;

    cout<<check(2)<<endl;
    cout<<check(12)<<endl;
    cout<<check(19)<<endl;
    cout<<check(1021)<<endl;
    cout<<check(1)<<endl;

    return 0;
}