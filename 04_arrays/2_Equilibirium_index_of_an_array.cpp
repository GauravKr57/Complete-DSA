
EQUILIBIRIUM INDEX means the sum on left side of index = sum at right side of index.


Tricky Solution : The idea is to first get the total sum of array. Then Iterate through the array and keep updating the left sum which is initialized as zero. In the loop, we can get the right sum by subtracting the elements one by one. Then check whether the Leftsum and the Rightsum are equal.
Pseudo Code
// n : size of array
int eqindex(arr, n)
{
    sum = 0
    leftsum = 0
    for (i=0 to n-1)
        sum += arr[i]

    for (i=0 to n-1)
    {
        // now sum will be righsum for index i
        sum -= a[i]
        if (sum == leftsum )
            return i
        leftsum += a[i]
    }
}


Time Complexity : O(n)
Auxiliary Space : O(1)


// int eqindex(arr, n)
// {
//     sum = 0
//     leftsum = 0
//     for (i=0 to n-1)
//         sum += arr[i]

//     for (i=0 to n-1)
//     {
//         // now sum will be righsum for index i
//         sum -= a[i]
//         if (sum == leftsum )
//             return i
//         leftsum += a[i]
//     }
// }