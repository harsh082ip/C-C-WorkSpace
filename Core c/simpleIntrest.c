#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter Principle Amount: ");
    scanf("%f", &p);
    printf("Enter Rate of Intrest in percentage: ");
    scanf("%f", &r);
    printf("Enter Time in months: ");
    scanf("%f", &t);
    si = (p*r*t)/100;
    printf("Simple intrest will be: %f", si);
    return 0;
}