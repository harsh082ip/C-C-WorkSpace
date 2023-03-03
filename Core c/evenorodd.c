#include<stdio.h>
int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    (a%2==0)?printf("%d is even", a):printf("%d is odd", a);
    return 0;
}