
//BETTER : Recursive

int firstOcc(int arr[],int low,int high, int x){
    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;

    if(x<arr[mid]){
        return firstOcc(arr,low,mid-1,x);
    }
    else if(x>arr[mid]){
        return firstOcc(arr,mid+1,high,x);
    }
    else{
        if(mid==0 || (arr[mid-1]!=arr[mid])){
            return mid;
        }
        else{
            return firstOcc(arr,low,mid-1,x);
        }
    }

}

//EFFICIENT : Iterative

int firstOccurence(int arr[], int n, int x){
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
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
            else{                   //arr[mid-1]==arr[mid]  case
                high=mid-1;
            }
        }
    }

    return -1;
}