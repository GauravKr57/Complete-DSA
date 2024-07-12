
//EFFICIENT : SLIDING WINDOW TECHNIQUE

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