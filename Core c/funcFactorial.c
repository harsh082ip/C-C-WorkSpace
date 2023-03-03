#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("Result: %d", fact(n));
}
int fact(int n)
{
    int f = 1;
    for(int i = 1; i<=n; i++)
    {
        f = f*i;
    }
    return f;
}