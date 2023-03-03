#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two nos: \n");
    scanf("%d%d", &a,&b);
    
  
    if(a%3==0 && a%5==0)
    printf("Divisible by both");
    else if(a%3==0)
    printf("Divisible by 3");
     else if(a%5==0)
    printf("Divisible by 5");
    return 0;
}