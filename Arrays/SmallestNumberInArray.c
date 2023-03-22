#include<stdio.h>
int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Elements of this array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // For Finding Minimum
    int min = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("The Smallest Number in this Array is %d", min);
}