
//NAIVE 

int CircularSum(int arr[],int n){
    int res=arr[0];

    for(int i=0;i<n;i++){
        int curr_sum=arr[0];
        int curr_max=arr[0];

        for(int j=1;j<n;j++){
            int index=(i+j)%n;  //There are n subarrays for each element
            curr_sum=curr_sum+arr[index];
            curr_max=max(curr_max,curr_sum);
        }
        res=max(res,curr_max);
    }
    return res;
}

//EFFICIENT

int normalSum(int arr[],int n){
        int res=arr[0];
        int maxEnding=arr[0];
        for(int i=1;i<n;i++){
            maxEnding=max(maxEnding+arr[i],arr[i]);
            res=max(res,maxEnding);
        }
        return res;
    }
    
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int normalSubarray= normalSum(arr,num);
        
        if(normalSubarray<0){
            return normalSubarray;
        }
        
        int sum=arr[0];
        for(int i=1;i<num;i++){
            sum=sum+arr[i];
        }
         
        int subtract=arr[0];
        int minEnding=arr[0];
        
        for(int i=1;i<num;i++){
            minEnding=min(minEnding+arr[i],arr[i]);
            subtract=min(subtract,minEnding);
        }
        
        int circularSubarray= sum-subtract;
        
        int res= max(normalSubarray,circularSubarray);
        
        return res;
        
    }