#include<bits/stdc++.h>
using namespace std;


//me NAIVE
int lcm(int a, int b){
    int res;
    int temp= max(a,b);
    for(int i=temp;i<=a*b;i++){
        if((i%a == 0) && (i%b==0)){
            res=i;
            break;
        }
    }
    return res;
}

//Efficient (LCMxHCF =product of numbers)


int main(){

    cout<<lcm(2,5)<<endl;
    cout<<lcm(4,6)<<endl;
    cout<<lcm(100,300)<<endl;

    return 0;
}