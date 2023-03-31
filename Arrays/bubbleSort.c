#include<stdio.h>
void BubbleSort(int arr[], int  n);
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    BubbleSort(arr, n);
    for(int i = 0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
void BubbleSort(int arr[], int n)
{
    int swaped;
    for(int i = 0; i < n; i++)
        {
            swaped = 0;
            for(int j = 1; j < n-i; j++)
            {
                if(arr[j] < arr[j-1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swaped = 1;
                }
            }
            if(swaped == 0)
            {
                break;
            }
        }
}