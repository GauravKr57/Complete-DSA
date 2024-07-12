#include<bits/stdc++.h>
using namespace std;

int main(){

    int x=3; // 3=011
    int y=6; // 6=110

    cout<<(x & y)<<endl;  // AND bitwise operator
    cout<<(x | y)<<endl;  // OR bitwise operator
    cout<<(x ^ y)<<endl;  // XOR bitwise operaor (GIVES 1 AS OUTPUT WHEN BOTH INPUTS ARE DIFFERENT)

    x=3;
    cout<<(x<<1)<<endl; // left shift opertor
    cout<<(x<<4)<<endl;

    x=33;
    cout<<(x>>1)<<endl;  // Right shift
    cout<<(x>>2)<<endl;
    cout<<(x>>4)<<endl;

    int unsigned z=1;
    cout<<(~z)<<endl;  // NOT bitwise operator
    int unsigned p=5;
    cout<<(~p)<<endl;

    int r=1;
    int s=5;
    cout<<(~r)<<endl;
    cout<<(~s)<<endl;
 


    return 0;
}