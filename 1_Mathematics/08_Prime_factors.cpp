#include<bits/stdc++.h>
using namespace std;

//NAIVE

void factors(int n){
   if(n<=1)
   return;
   for(int i=2;i*i<=n;i++){
    while(n%i==0){
        cout<<i<<" ";
        n=n/i;
    }
   }
   if(n>1){
    cout<<n<<" ";
   }
}


//EFFICIENT
void printPrimefactors(int n){
    while(n%2==0){
        cout<<2<<" ";
        n=n/2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n=n/3;
    }
    for(int i=5;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2)==0){
            cout<<i+2<<" ";
            n=n/(i+2);
        }
    }
    if(n>3){
        cout<<n<<" ";
    }
    cout<<endl;
}


int main(){

    factors(35);
    factors(355);
    factors(17);
    factors(228372);

    printPrimefactors(35);
    printPrimefactors(355);
    printPrimefactors(17);
    printPrimefactors(228372);

    return 0;
}