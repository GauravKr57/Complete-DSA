
//NAIVE

int maxAppear(int left[],int right[],int n,int max){
    int frequency[max]={0};

    for(int i=0;i<n;i++){
        for(int j=left[i];j<=right[i];j++){
            frequency[j]++;
        }
    }
    int res=0;
    for(int i=1;i<max;i++){
        if(frequency[i]>frequency[res]){
            res=i;
        }
    }
    return res;
}

//MOST EFFICIENT

// Maximum occurred integer in n ranges using Difference array technique.
// Below is the idea to solve the problem:

// The idea is to use the Difference array technique. Create a vector initialized with value zero. Iterate through every range and mark the presence of the beginning of every range by incrementing the start of the range with one i.e. arr[L[i]]++ and mark the end of the range by decrementing at index one greater than the end of range by one i.e. arr[R[i]+1]–.

// Now when computing the prefix sum, Since the beginning is marked with one, all the values after beginning will be incremented by one. Now as increment is only targeted only till the end of the range, the decrement on index R[i]+1 prevents that for every range i.

int maxTimes(int left[],int right[],int n,int max){
    int freq[max+1]={0};
    
    for(int i=0;i<n;i++){
        freq[left[i]]++;
        freq[right[i]+1]--;
    }

    int res=0;
    for(int i=1;i<max;i++){
        freq[i]=freq[i]+freq[i-1];
        if(freq[i]>freq[res]){
            res=i;
        }
    }
    return res;
}