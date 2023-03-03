#include<stdio.h>
int sum();
int main()
{
    int r = sum();
    printf("%d", r);
}
int sum()
{
    int a,b;
    scanf("%d%d", &a,&b);
    return (a+b);
}