#include<stdio.h>
#include<stdbool.h>
void bubbleSort(int arr[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int arr[], int n) {
   int i, j, temp;
   for (i = 0; i < n-1; i++) { 
       // Last i elements are already sorted
       for (j = 0; j < n-i-1; j++) { 
           if (arr[j] < arr[j+1]) {
              // swap arr[j] and arr[j+1]
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
           }
       }
   }
}
