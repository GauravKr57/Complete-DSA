#include<bits/stdc++.h>
using namespace std;

int count_digits(int n){
    int count = 0;
    int x = n;
    while(x){
        x/=10;
        count++;
    }
    return count;
}

int main(){

    cout<< count_digits(345);
    cout<< count_digits(45);

    return 0;
}