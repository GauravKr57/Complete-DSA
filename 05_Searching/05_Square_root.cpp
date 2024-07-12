
//NAIVE

int sq(int x){
    if(x==0 || x==1){
        return x;
    }
    int i=1;
    while(i*i<=x){
        i++;
    }
    return i-1;
}

//EFFICIENT: Binary Search

int sqRootFloor(int x){
    if(x==0 || x==1){
        return x;
    }

    int low=1,ans;
    int high=x;

    while(low<=high){
        int mid=low+(high-low)/2;
        int mSquare= mid*mid;

        if(mSquare==x){
            return mid;
        }
        else if(x<mSquare){
            high=mid-1;
        }
        else{               // if(x>mSquare) case
            low=mid+1;
            ans=mid;
        }
    }

    return ans;
}