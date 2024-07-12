#include<bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0){
        return -n;
    }
    return n;
}

int main(){

    int I;
    cin>>I;
    cout<<absolute(I);
    

    return 0;
}