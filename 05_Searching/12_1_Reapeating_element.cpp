
//NAIVE

int repeat(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
}

// BETTER

int findRepeatng(int arr[], int n){
    bool visited[n]={false};

    for(int i=0;i<n;i++){
        if(visited[arr[i]]==true){
            return arr[i];
        }
        visited[arr[i]]=true;
    }
}

//BEST 

// 1. if smallest element is 1

int repeating(int arr[], int n){
    int slow=arr[0], fast =arr[0];

do{
    slow=arr[slow];
    fast=arr[arr[fast]];
} while(slow!=fast);

slow=arr[0];

while(slow != fast){
    slow=arr[slow];
    fast=arr[fast];
}

return slow;
}

// 2. If the minimum element is 0

int getRepeating(int arr[], int n){
    int slow=arr[0]+1;
    int fast=arr[0]+1;

    do
    {
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;

    } while (slow != fast);

    slow=arr[0]+1;
    while(slow != fast){
        slow=arr[slow]+1;
        fast=arr[fast]+1;
    }

    return slow-1;
    
}