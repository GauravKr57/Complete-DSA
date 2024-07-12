#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<'z'-'a';

    return 0;
}

int minimum_difference(int n, vector<string> &words) {
        // Code here.
        for(int i=0;i<n-1;i++){
            int x=INT_MAX,count=0;
            for(int j=0;j<words[i].length();j++){
                string s=words[i+1];
                string t=words[i];
                int y=s[j]-t[j];
                
                count=count+y;
            }
            x=min(x,count);
        }
        
        return x;
        
    }