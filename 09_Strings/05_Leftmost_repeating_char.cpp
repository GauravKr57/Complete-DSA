#include<bits/stdc++.h>
using namespace std;

int main(){

    

    return 0;
}


// NAIVE

int leftMost(string &str) 
{
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j])return i;
        }
    }
    return -1;
}

// BETTER

const int CHAR=256;
int leftMost(string &str) 
{
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]>1)return i;
    }
    return -1;
}


// EFFICIENT

int LeftMost(string &s){

    int visited[CHAR];

    fill(visited, visited+CHAR, false);
    int res= -1;

    for(int i=s.length()-1;i>=0;i--){

        if(visited[s[i]] == true){
            res= i;
        }
        else{
            visited[s[i]] = true;
        }

    }

    return res;

}