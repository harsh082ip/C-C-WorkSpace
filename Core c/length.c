#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int count = 0;
    
    while(n>0)
    {
        count++;
        n = n/10;
    }
    printf("The no of digits in will be %d", count);
    return 0;
}