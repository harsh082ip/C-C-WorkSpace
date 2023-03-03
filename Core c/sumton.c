#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum = sum +i;
    }
    printf("The Sum from 1 to n is: %d", sum);
    return 0;
}