
//EFFICIENT: Binary Search

int search(int arr[], int n,int x){
    int low=0,high=n-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==x){
            return mid;
        }

        else if(arr[low]<=arr[mid]){ //Left side is sorted
            if((x>=arr[low])&&(x<arr[mid])){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if((x>arr[mid])&&(x<=arr[high])){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }

    return -1;
}