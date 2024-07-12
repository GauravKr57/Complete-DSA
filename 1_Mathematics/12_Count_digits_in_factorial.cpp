#include<bits/stdc++.h>
using namespace std;


//THIS CODE DOES NOT WORK FOR N>20 as long long cannot store this much long values
int count(int n){
    long long fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    int count=0;
    while(fac>0){
        fac=fac/10;
        count++;
    }
    return count;
}

//MOST EFFICIENT SOLUTION

int countDigitsFactorial(int n){
    int x=0;
    for(int i=1;i<=n;i++){
        x=x+log10(i);
    }
    int count=floor(x+1);
    
    return count;
}

int main(){

    cout<<countDigitsFactorial(5)<<endl;
    cout<<countDigitsFactorial(3)<<endl;
    cout<<countDigitsFactorial(22)<<endl;

    return 0;
}