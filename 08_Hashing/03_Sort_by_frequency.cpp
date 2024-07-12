#include<bits/stdc++.h>
using namespace std;

 static bool valSort(pair<int,int> p1, pair<int,int> p2){
        
        if(p1.second == p2.second){
            return p1.first < p2.first; 
        }
        
        return (p1.second > p2.second);
    }
   
    
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        vector<int> ans;
        
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        vector<pair<int,int>> v;
        
        for(auto x: mp){
            v.push_back(x);
        }
        
        sort(v.begin(),v.end(),valSort);
        
        for(auto e: v){
            for(int i=0;i<e.second;i++){
                ans.push_back(e.first);
            }
        }
        
        return ans;
        
    }

int main(){

    

    return 0;
}