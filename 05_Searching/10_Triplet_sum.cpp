
int isTriplet(int arr[], int n, int sum){
    for(int i=0;i<n-2;i++){
        int j=i+1,k=n-1;
        while(j<k){
            if(arr[j]+arr[k] == sum-arr[i]){
                return true;
            }
            else if(arr[j]+arr[k] < sum-arr[i]){
                j++;
            }
            else{
                k--;
            }
        }
    }

    return false;
}