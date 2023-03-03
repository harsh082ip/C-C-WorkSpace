#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter no: ");
    scanf("%d", &n);
    while(n>0)
    {
        int d = n%10;
        sum = sum + d;
        n = n/10;
    }
    printf("The sum is %d", sum);
    return 0;
}