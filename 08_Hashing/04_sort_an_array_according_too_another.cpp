
vector<int> sortA1ByA2(vector<int> A1, int n, vector<int> A2, int m) 
    {
        //Your code here
        vector<int> ans;
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[A1[i]]++;
        }
        
        for(int i=0;i<m;i++){
            if(mp.find(A2[i]) != mp.end()){
                
                for(int j=0;j<mp[A2[i]];j++){
                    ans.push_back(A2[i]);
                }
                mp.erase(A2[i]);
            }
        }
        
        for(auto x: mp){
            for(int i=0;i<x.second;i++){
                ans.push_back(x.first);
            }
        }
        
        
        
        return ans;
        
    } 