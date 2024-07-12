// Binary Search Approach: 

// Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n).



// ITERATIVE : Efficient

int bSearch(int arr[],int n,int x){
    int low=0 ,high= n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(x==arr[mid]){
            return mid;
        }
        else if(x<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

// RECURSIVE

int binarySearch(int arr[], int low, int high, int x){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return x;
    }
    else if(arr[mid]>x){
        return binarySearch(arr,low,mid-1,x);
    }
    else{
        return binarySearch(arr,mid+1,high,x);
    }

}