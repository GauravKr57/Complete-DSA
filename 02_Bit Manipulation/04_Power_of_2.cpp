#include<bits/stdc++.h>
using namespace std;

//NAIVE

bool isPowof2(int n){
    if(n<=0){
        return false;
    }
    while(n != 1){
        if(n%2 != 0){
            return false;
        }
        n=n/2;
    }
    return true;
}

//EFFICIENT

bool isPow2(int n){

    return n &&((n & (n-1))==0);
}

int main(){

    cout<<isPowof2(0)<<endl;
    cout<<isPowof2(1)<<endl;
    cout<<isPowof2(32)<<endl;
    cout<<isPowof2(13468)<<endl;
    cout<<isPowof2(47)<<endl;

    cout<<isPow2(0)<<endl;
    cout<<isPow2(1)<<endl;
    cout<<isPow2(32)<<endl;
    cout<<isPow2(13468)<<endl;
    cout<<isPow2(47)<<endl;
    

    return 0;
}