
// Using Binary Search, check if the middle element is the peak element or not. If the middle element the peak element terminate the while loop and print middle element, then check if the element on the right side is greater than the middle element then there is always a peak element on the right side. If the element on the left side is greater than the middle element then there is always a peak element on the left side.

// GFG

int getPeak(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (((mid == 0) || (arr[mid - 1] <= arr[mid])) && ((mid == n - 1) || (arr[mid + 1] <= arr[mid])))
        {
            return mid;
        }
        else if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

// MINE

int peak(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[0] > arr[1])
        {
            return 0;
        }
        if (arr[n - 1] > arr[n - 2])
        {
            return n - 1;
        }

        else if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}