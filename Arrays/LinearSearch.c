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
    int target;
    printf("Enter Traget Element: ");
    scanf("%d", &target);
    int c = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            printf("Target found");
            c=1;
            break;
        }
    }
    if(c!=1)
        printf("Target Not Found :/");

}

