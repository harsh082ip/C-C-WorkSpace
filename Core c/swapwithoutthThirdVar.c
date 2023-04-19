// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf("value of x: ");
//     scanf("%d",&x);
//     printf("value of y: ");
//     scanf("%d",&y);
//     x = x+y;
//     y = x-y;
//     x = x-y;
//     printf("After Swapping...\n");
//     printf("value of x: %d\n", x);
//     printf("value of y: %d\n", y);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}