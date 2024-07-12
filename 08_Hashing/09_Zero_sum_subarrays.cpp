

 //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        
        long long count=0;
        long long pre=0;
        
        unordered_map<long long, int> mp;
        
        for(int i=0;i<n;i++){
            pre += arr[i];
            
            mp[pre]++;
            
            if(pre==0){
                count++;
            }
            
            if(mp[pre]>1){
                for(int j=1;j<mp[pre];j++){
                    count++;
                }
            }
        }
        
        return count;
        
    }