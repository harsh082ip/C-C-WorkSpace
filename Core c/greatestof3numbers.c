#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three Numbers: \n");
    scanf("%d%d%d", &a,&b,&c);
    // if(a>b && a>c)
    // {
    //     printf("%d is greater", a);
    // }
    // if(b>a && b>c)
    // {
    //     printf("%d is greater", b);
    // }
    // if(c>a && c>b)
    // {
    //     printf("%d is greater", c);
    // }
    // return 0;
    (a>b && a>c)?printf("%d is greater", a):(b>a && b>c)?printf("%d is greater", b):printf("%d is greater", c);
}