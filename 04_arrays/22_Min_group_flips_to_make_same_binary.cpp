
// An Efficient Solution is based on the below facts : 

// There are only two types of groups (groups of 0s and groups of 1s)
// Either the counts of both groups are same or the difference between counts is at most 1. For example, in {1, 1, 0, 1, 0, 0} there are two groups of 0s and two groups of 1s.  In example, {1, 1, 0, 0, 0, 1, 0, 0, 1, 1}, count of groups of 1 is one more than the counts of 0s.
// Based on the above facts, we can conclude that if we always flip the second group and other groups that of the same type as the second group, we always get the correct answer.  In the first case, when group counts are the same, it does not matter which group type we flip as both will lead to the correct answer.  In the second case, when there is one extra, by ignoring the first group and starting from the second group, we convert this case to first case (for subarray beginning from the second group) and get the correct answer.

void printGroups(bool arr[],int n){

    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            if(arr[i]!=arr[0]){
                cout<<" From "<<i<<" to ";
            }
            else{
                cout<<i-1<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0]){
        cout<<n-1<<endl;
    }
}