#include<iostream>
using namespace std;

int factorial(int n){
    int res = 1;
    for(int i=n;i>0;i--){
        res=res*(i);
    }
    return res;
}

//Recursive approach

int fac(int x){
    if (x==0){
        return 1;
    }
    return x*fac(x-1);
}

int main(){

    cout<<factorial(4)<<endl;
    cout<<factorial(1)<<endl;
    cout<<factorial(0);

    return 0;
}