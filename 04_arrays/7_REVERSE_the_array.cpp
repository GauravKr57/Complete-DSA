

int reverse(int arr[],int n){

    int low=0,high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}