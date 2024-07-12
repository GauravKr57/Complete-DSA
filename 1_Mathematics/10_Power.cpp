#include<bits/stdc++.h>
using namespace std;


//NAIVE  O(n)

int power(int n, int x){
    int res=1;
    for(int i=1;i<=x;i++){
        res=res*n;
    }
    return res;
}

//EFFICIENT  O(log n)

int pow(int x, int n)
{
    if(n==0){
        return 1;
    }
    int temp=pow(x,n/2);
    temp=temp*temp;
    if(n%2==0){
        return temp;
    }
    else{
        return temp*x;
    }
}

//ITERATIVE POWER (MOST EFFICIENT SOLUTION)

long long iterativePower(int x, int n){
    int res=1;
    while(n>0){
        if(n%2!=0){
            res=res*x;
        }
        n=n/2;
        x=x*x;
    }
    return res;
}

//FURTHER OPTIMISATION (Using bit manipulation)

long long raised(int x, int n){
    int res=1;
    while(n>0){
        if(n&1){
            res=res*x;
        }
        x=x*x;
        n=n>>1;
    }
    return res;
}

int main(){

    cout<<power(3,4)<<endl;
    cout<<power(2,10)<<endl;

    cout<<pow(3,4)<<endl;
    cout<<pow(2,10)<<endl;

    cout<<iterativePower(3,4)<<endl;
    cout<<iterativePower(2,10)<<endl;

    cout<<raised(3,4)<<endl;
    cout<<raised(2,10)<<endl;

    return 0;
}