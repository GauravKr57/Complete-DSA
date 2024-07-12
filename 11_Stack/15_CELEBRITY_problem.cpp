#include<bits/stdc++.h>
using namespace std;

//EFFICIENT

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;

    // M[i][j] == 1 means ith person knows the jth person

    // Push all elements to stack
    for(int i=0;i<n;i++){
        s.push(i);
    }

    // last element to remain in stack is the potential candidiate
    while(s.size() != 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if(M[a][b] == 1){  // a knows b
            s.push(b);
        }
        else{              // b knows a
            s.push(a);
        }
    }

    int ans = s.top();  // potentail candidate;

    //verify

    //row elements = 0
    int zeroCount = 0;
    for(int i=0;i<n;i++){
        if(M[ans][i] == 0){
            zeroCount++;
        }
    }
    if(zeroCount != n){
        return -1;
    }

    // colelemets  = 1
    int oneCount = 0;
    for(int i=0;i<n;i++){
        if(M[i][ans] == 1){
            oneCount++;
        }
    }
    if(oneCount != n-1){
        return -1;
    }

    return ans;

}

int main(){

    

    return 0;
}