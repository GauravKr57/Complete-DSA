// Given an array arr[] of size n, its prefix sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] … arr[i].


int arr[];
int n;
int ps[n];
ps[0]=arr[0];
for(int i=1;i<n;i++){
    ps[i]=ps[i-1]+arr[i];
}

int getSum(int l,int r){
    if(l==r){
        return ps[r];
    }
    return ps[r]-ps[l-1];
}