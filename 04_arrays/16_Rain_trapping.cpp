// The basic intuition of the problem is as follows:

// An element of the array can store water if there are higher bars on the left and the right. 
// The amount of water to be stored in every position can be found by finding the heights of bars on the left and right sides. 
// The total amount of water stored is the summation of the water stored in each index.


//NAIVE

int getWater(int arr[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];
        for(int j=0;j<i;j++){
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[i];
        for(int j=i+1;j<n;j++){
            rmax=max(rmax,arr[j]);
        }
        res=res+(min(lmax,rmax)-arr[i]);
    }
    return res;
}

//EFFICIENT : Important

int storeWater(int arr[], int n){
    int res=0;
    int lmax[n],rmax[n];

    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(arr[i],lmax[i-1]);
    }

    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(arr[i],rmax[i+1]);
    }

    for(int i=1;i<n-1;i++){
        res=res+(min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
}