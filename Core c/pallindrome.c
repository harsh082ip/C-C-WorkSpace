#include<stdio.h>
int main()
{
    int n;
    int rev = 0;
    printf("Enter no: ");
    scanf("%d", &n);
    int x = n;
    while(x>0)
    {
        int d = x%10;
        rev = (rev*10)+d;
        x = x/10;
    }
    printf("The Reverse of the number is: %d\n", rev);
    if(rev == n)
    {
        printf("Number is Pallindrome");
    }
    else
    {
        printf("Number is not Pallindrome");
    }
    return 0;
}