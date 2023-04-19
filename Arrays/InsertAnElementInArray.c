#include<stdio.h>
int[] InsertElement( int n, int arr[], int x, int pos);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int value = 40;
    int pos = 2;
   arr= InsertElement(6, arr, value, pos);
}
int[] InsertElement( int n, int arr[], int x, int pos)
{
     int i;
 
        // create a new array of size n+1
        int newarr[n+1];
        for (i = 0; i < n + 1; i++) {
            if (i < pos - 1)
                newarr[i] = arr[i];
            else if (i == pos - 1)
                newarr[i] = x;
            else
                newarr[i] = arr[i - 1];
        }
        return newarr;
}