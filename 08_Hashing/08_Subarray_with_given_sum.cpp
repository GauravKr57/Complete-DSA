
//EFFICIENt

bool isSubarraySum(int arr[],int n,int sum){
    int s=0;
    int curr=0;

    for(int e=0;e<n;e++){
        curr=curr+arr[e];
        while(sum<curr){
            sum=sum-arr[s];
            s++;
        }
        if(curr==sum){
            return true;
        }
    }
    return false;
}

// EFFICIENT: HASHING

bool isSum(int arr[], int n, int sum){

    unordered_set<int> s;
    int preSum=0;
    
    for(int i=0;i<n;i++){

        preSum+=arr[i];

        if(preSum == sum){
            return true;
        }
        if(s.find(preSum-sum) != s.end()){
            return true;
        }

        s.insert(preSum);
    }

    return false;

}