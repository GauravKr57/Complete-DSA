
//NAIVE

bool chck0(int arr[], int n){

    for(int i=0;i<n;i++){
        int curr_sum=0;

        for(int j=i;j<n;j++){
            curr_sum += arr[j];
        }
        if(curr_sum == 0){
            return true;
        }
    }

    return false;
}


// EFFICIENT : HASHING

bool check0sum(int arr[], int n){

    int pre_sum=0;

    unordered_set<int> h;

    for(int i=0;i<n;i++){

        pre_sum+=arr[i];
        if(h.find(pre_sum) != h.end()){
            return true;
        }
        if(pre_sum==0){
            return true;
        }

        else{
            h.insert(pre_sum);
        }

    }

    return false;

}

// or

bool find(int arr[], int n){

    unordered_map<int,int> mp;

    int pre_sum=0;
    for(int i=0;i<n;i++){
        
        pre_sum += arr[i];

        mp[pre_sum]++;
        if(mp[pre_sum]>1 || pre_sum==0){
            return true;
        }

    }

    return false;
}