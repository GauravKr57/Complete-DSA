// Sliding Window Technique

// This technique shows how a nested for loop in few problems can be converted to single for loop and hence reducing the time complexity.

// Applying sliding window technique :
 

// We compute the sum of first k elements out of n terms using a linear loop and store the sum in variable window_sum.
// Then we will graze linearly over the array till it reaches the end and simultaneously keep track of maximum sum.
// To get the current sum of block of k elements just subtract the first element from the previous block and add the last element of the current block 


//Naive
int sumUptoK(int arr[],int n, int k){
    int res=INT_MIN;

    if(n<k){
        return-1;
    }

    for(int i=0;i<n-k;i++){
        int sum=0;
        for(int j=i;j<k;j++){
            sum=sum+arr[j];
        }
        res=max(res,sum);
    }

    return res;
}

//EFFICIENT

int addUptok(int arr[], int n, int k){
    int currSum=0;
    for(int i=0;i<k;i++){
        currSum=currSum+arr[i];
    }
    int res=currSum;

    for(int i=k;i<n;i++){
        currSum=currSum+arr[i]-arr[i-k];
        res=max(currSum,res);
    }
    return res;
}