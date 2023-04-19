#include<stdio.h>
#include<stdbool.h>
int binarySearch(int arr[], int target, int n);
void bubbleSort(int arr[], int n);
int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements: \n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);
    bubbleSort(arr, n);
    printf("-------New Sorted Array-------\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("%d", binarySearch(arr, target, n));
}
int binarySearch(int arr[], int target, int n)
{
    int start = 0;
    int end = n-1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] > target)
        {
            end = mid - 1;
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
void bubbleSort(int arr[], int n)
{
    bool swapped;
    for(int i = 0; i < n; i++)
    {
        swapped = false;
        for(int j = 1; j < n - i ; j++)
        {
            if(arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                swapped = true;
            }
        }
        if(!swapped)
        {
            return;
        }
    }
    return;
}