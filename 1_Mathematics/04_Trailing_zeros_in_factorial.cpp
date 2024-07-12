#include<bits/stdc++.h>
using namespace std;


//NAIVE SOLUTION

int trail(int n){
    int res=1;
    for(int i=2;i<=n;i++){
        res=res*i;
    }
    if(res%10 != 0){
        return 0;
    }
    int count=0;
    while((res%10) ==0){
        count++;
        res/=10;
    } ;
    return count;
}

//EFFICIENT METHOD

int trailing_zeros(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+(n/i);
    }
    return res;
}

int main(){

    cout<<trail(5)<<endl;
    cout<<trail(4)<<endl;
    cout<<trail(10)<<endl;

    cout<<trailing_zeros(5)<<endl;
    cout<<trailing_zeros(4)<<endl;
    cout<<trailing_zeros(10)<<endl;

    return 0;
}