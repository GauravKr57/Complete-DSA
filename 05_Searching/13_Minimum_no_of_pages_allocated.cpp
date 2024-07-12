
//NAIVE : Recursive solution

int sum(int a[], int b, int e){
    int s=0;
    for(int i=b;i<=e;i++){
        s+=a[i];
    }
    return s;
}

int minPages(int arr[], int books, int students){
    if(students==1){
        return sum(arr,0,books-1);
    }
    if(books==1){
        return arr[0];
    }

    int res= INT_MAX;
    for(int i=1;i<books;i++){

        res=min(res, max( minPages(arr,i,students-1),sum(arr,i,books-1) ));

    }
    return res;
}


//EFFICIENT : Binary Search

int minimumPages(int arr[], int n, int k){
    int sum=0;
    int mx=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx= max(mx,arr[i]);
    }

    int low=mx, high=sum; //Answe lies between mx and sum
    int res=0;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(isFeasible(arr, n, k, mid)){
            res=mid;
            high=mid-1;                    // If feasible check on left side for minimum element
        }
        else{
            low=mid+1;
        }
    }

    return res;

}

//Check for feasibility

bool isFeasible(int arr[], int n, int k, int ans){
    int req=1,sum=0;

    for(int i=0;i<n;i++){
        if(sum+arr[i]>ans){
            req++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }

    return (req<=k);
}