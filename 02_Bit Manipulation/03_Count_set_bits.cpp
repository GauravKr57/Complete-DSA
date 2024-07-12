#include<bits/stdc++.h>
using namespace std;


// NAIVE
int countSet(int n){

    int res=0;
    for(int i=0;i<n;i++){
        if(n & 1 != 0){
            res++;
        }
        n=(n>>1);
    }

    return res;
}

//NAIVE
int count(int n){
    int res=0;
    while(n>0){
        if(n & 1){
            res++;
        }
        n=n/2;
    }
    return res;
}

//EFFICIENT METHOD
int sets(int n){
    int res=0;
    while(n>0){
        n=n&(n-1);
        res++;
    }
    return res;

}


// BEST METHOD

int tbl[256];

void initialise(){
    tbl[0]=0;
    for(int i=1;i<256;i++){
        tbl[i]=tbl[i&(i-1)]+1;
    }
}

int CS(int n){
    return tbl[n&255] + tbl[(n>>8)&255] + tbl[(n>>16)&255] + tbl[(n>>24)];
}

int main(){

    cout<<countSet(0)<<endl;
    cout<<countSet(6)<<endl;
    cout<<countSet(13)<<endl;
    cout<<countSet(9237832826)<<endl;

    cout<<count(0)<<endl;
    cout<<count(6)<<endl;
    cout<<count(13)<<endl;
    cout<<count(9237832826)<<endl;

    cout<<sets(0)<<endl;
    cout<<sets(6)<<endl;
    cout<<sets(13)<<endl;
    cout<<sets(9237832826)<<endl;

    

    initialise();

    cout<<CS(0)<<endl;
    cout<<CS(6)<<endl;
    cout<<CS(13)<<endl;
    cout<<CS(9237832826)<<endl;

    return 0;
}