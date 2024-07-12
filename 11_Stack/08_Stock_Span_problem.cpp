#include<bits/stdc++.h>
using namespace std;

// NAIVE

void stockSpan(int price[],int n)
{
    for(int i=0;i<n;i++){
        int span = 1;
        for(int j=i-1;j>=0 && price[j]<=price[i];j--){
            span++;
        }
        cout<<span<<" ";
    }
}


//EFFICIENT

void printSpan(int price[],int n)
{
    stack<int> s;

    s.push(0);
    cout<<1<<" ";

    for(int i=1;i<n;i++){

        while(!s.empty() && price[s.top()]<=price[i]){
            s.pop();
        }

        int span = (s.empty()) ? i+1:i-s.top();
        cout<<span<<" ";

        s.push(i);
    }

}

int main(){

    

    return 0;
}