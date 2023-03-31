#include<stdio.h>
int BinarySearch(int arr[], int n, int  target);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int target = 100;
    int n = 5;
    int result = BinarySearch(arr, n, target);
    printf("%d", result);
    // for(int i = 0; i<n; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    return 0;
}
int BinarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n-1;
    while(start <= end)
    {
        int mid = start + (end-start) / 2;
        if(arr[mid] > target)
        {
            end = end - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}