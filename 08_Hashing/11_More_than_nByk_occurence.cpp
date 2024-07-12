
int count(int arr[], int n, int k){

    map<int,int> m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    int res=0;

    for(auto x: m){
        if(x.second > n/k){
            res++;
        }
    }

    return res;

}