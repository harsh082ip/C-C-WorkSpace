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
    //Displaying elements and getting sum
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("\nThe sum of this array is %d", sum);
}