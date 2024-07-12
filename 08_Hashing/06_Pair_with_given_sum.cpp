
// EFFICIENT: TWO POINTER APPROACH

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

// EFFICIENT FOR UNSORTED: HASHING

bool ispair(int arr[], int n, int sum){

    unordered_set<int> s;

    for(int i=0;i<n;i++){

        if(s.find(sum-arr[i]) != s.end()){
            return true;
        }
        else{
            s.insert(arr[i]);
        }
    }

    return false;
}
