
//NAIVE 

int findElement(int arr[],int n,int x){
    int i=0;
    while(true){
        if(arr[i]==x){
            return i;
        }
        if(arr[i]>x){
            return -1;
        }
        i++;
    }
}

//EFFICIENT 

int binarySearch(int arr[], int n,int x,int low, int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return x;
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

int searchInfinite(int arr[],int n, int x){
    if(arr[0]==x){
        return 0;
    }

    int i=1;
    while(arr[i]<x){
        i=i*2;
        if(arr[i]==x){
            return i;
        }
    }
    return binarySearch(arr,n,x,(i/2)+1,i-1);
}