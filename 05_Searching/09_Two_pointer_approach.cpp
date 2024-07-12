
//EFFICIENT : Two pointer approach

bool isPair(int arr[], int n, int sum){
    int i=0, j=n-1;

    while(i<j){
        if(arr[i]+arr[j] == sum){
            return true;
        }
        else if(arr[i]+arr[j]<sum){
            i++;
        }
        else{
            j--;
        }
    }

    return false;
}