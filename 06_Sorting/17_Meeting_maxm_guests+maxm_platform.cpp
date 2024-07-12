
// Meeting mximum guests

int maxx(int arr[], int dep[], int n){

    sort(arr,arr+n);
    sort(dep,dep+n);

    int i=1, j=0;
    int current=1, res=1;

    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            current++;
            i++;
        }
        else{
            current--;
            j++;
        }
        res= max(res,current);
    }

    return res;
}

// MINIMUM PLATFORMS REQUIRED

int platforms(int arr[], int dep[], int n){

    sort(arr,arr+n);
    sort(dep,dep+n);

    int i=1, j=0, train=1, res=1;

    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            train++;
            i++;
        }
        else{
            train--;
            j++;
        }

        res= max(res,train);
    }

    return res;
}