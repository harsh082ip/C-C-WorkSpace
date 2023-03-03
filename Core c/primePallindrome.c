#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int n = x;
    int count = 0;
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            count = 1;
            break;
        }
    }
    if(count == 0)
    {
        int rev = 0;
        while(n>0)
        {
            int d=n%10;
            rev = rev*10+d;
            n=n/10;
        }
        if(rev == x)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
    return 0;
}