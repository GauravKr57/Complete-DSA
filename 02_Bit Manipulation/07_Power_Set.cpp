#include<bits/stdc++.h>
using namespace std;

void PowerSet(string s){
    int n=s.length();
    int x=(1<<n);
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            if((i & (1<<j)) !=0){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}

int main(){


    PowerSet("abcd");

    return 0;
}