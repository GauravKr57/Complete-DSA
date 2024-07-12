#include<bits/stdc++.h>
using namespace std;

void check(int n, int k){
    int x= (n>>(k-1));
    if(x &1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<endl;
}

int main(){

    check(5,3);
    check(12682,7834);

    return 0;
}