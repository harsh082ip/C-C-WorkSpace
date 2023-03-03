#include<stdio.h>
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    int count = 0;
    for(int i = 2; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
    printf("Prime no");
    else
    printf("Not Prime no");
    return 0;
}