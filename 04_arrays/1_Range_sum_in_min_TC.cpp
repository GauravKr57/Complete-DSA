Problem #1 : Range Sum Queries using Prefix Sum

Description : We are given an Array of n integers, We are given q queries having indices l and r . We have to find out sum between the given range of indices.
Input 
[4, 5, 3, 2, 5]
3
0 3
2 4
1 3
Output
14 (4+5+3+2)
10 (3+2+5)
10 (5+3+2)


Solution : The numbers of queries are large. It will be very inefficient to iterate over the array and calculate the sum for each query separately. We have to devise the solution so that we can get the answer of the query in constant time. We will be storing the sum upto a particular index in prefix sum Array. We will be using the prefix sum array to calculate the sum for the given range.
prefix[] = Array stores the sum (A[0]+A[1]+....A[i]) at index i.
if l == 0 :
    sum(l,r) = prefix[r]
else :
    sum(l,r) = prefix[r] - prefix[l-1]


Pseudo Code
// n : size of array
// q : Number of queries
// l, r : Finding Sum of range between index l and r 
// l and r (inclusive) and 0 based indexing
void range_sum(arr, n)
{
    prefix[n] = {0}
    prefix[0] = arr[0]
    for i = 1 to n-1 :
        prefix[i] = a[i] + prefix[i-1]

    for (i = 1 to q )
    {
        if (l == 0) 
        {
            ans = prefix[r]
            print(ans)
        }
        else 
        {
            ans = prefix[r] - prefix[l-1]
            print(ans)
        }
    }
}



Time Complexity : Max(O(n),O(q)) // IMPORTANT
Auxiliary Space : O(n)


// int prefix[]={0};
// prefix[0]=arr[0];

// for(int i=1;i<n;i++){
//     prefix[i]=arr[i]+prefix[i-1];
// }

// void range_sum(arr[],n,l,r){
//     if(l==0){
//         cout<<prefix[r];
//     }else{
//         cout<<prefix[r]-prefix[l-1];
//     }
// }