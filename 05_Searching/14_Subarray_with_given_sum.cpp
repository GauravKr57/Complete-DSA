
//EFFICIENT : TWO POINTERS APPROACH

vector<int> subarraySum(int arr[], int n, int givenSum){

    if(givenSum==0){
        return{-1};
    }
     
    int i=0,j=0, sum=0;
    while(i<n && j<=n){

        if(sum==givenSum){
            return {i+1,j};
        }
        else if(sum<givenSum){
            sum=sum+arr[j];
            j++;
        }
        else{
            sum=sum-arr[i];
            i++;
        }

    }

    return {-1};

}