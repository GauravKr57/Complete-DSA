#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n==1){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    else if((n%2==0) || (n%3==0)){
            return false;
        }
    for(int i=5; i*i<=n; i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
    
    int exactly3Divisors(int n)
    {
        //Your code here
        int count=0;
        for(int i=1;i*i<=n;i++){
            if(check(i)){
                count++;
            }
        }
     
      return count;

    }

int main(){

    

    return 0;
}