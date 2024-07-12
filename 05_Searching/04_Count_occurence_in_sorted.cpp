
int firstOccur(int arr[], int n, int x){
    int low=0,high=n-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(x<arr[mid]){
            high=mid-1;
        }
        else if(x>arr[mid]){
            low=mid+1;
        }
        else{
            if(mid==0 || (arr[mid-1]!=arr[mid])){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int lastOccuring(int arr[], int n, int x){
    int start=0,end=n-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(x<arr[mid]){
            end=mid-1;
        }
        else if(x>arr[mid]){
            start=mid+1;
        }
        else{
            if(mid==n-1 || (arr[mid]!=arr[mid+1])){
                return mid;
            }
            else{
                start=mid+1;
            }
        }
    }
    return -1;
}

int countOccurence(int arr[], int n, int x){
    int first=firstOccur(arr,n,x);
    int last=lastOccuring(arr,n,x);

    if(first==-1){
        return 0;
    }

    return (last-first+1);
}