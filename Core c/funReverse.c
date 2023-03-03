#include<stdio.h>
int rev(int x);
int main()
{
    int x;
    printf("Enter no: ");
    scanf("%d", &x);
    printf("Reverse is: %d", rev(x));
}
int rev(int x)
{
    int rev = 0;
    while(x>0)
    {
        int d = x%10;
        rev = rev * 10 + d;
        x = x/10;
    }
    return rev;
}
