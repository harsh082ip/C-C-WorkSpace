#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter Starting Value m: ");
    scanf("%d", &m);
    printf("Enter Ending Value n: ");
    scanf("%d", &n);
    int count = 0;
    for(int i = m; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    printf("There are total %d Even Numbers", count);
    return 0;
}