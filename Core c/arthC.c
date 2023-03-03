#include<stdio.h>
int main()
{
    printf("Enter Radius: ");
    float area, rad;
    scanf("%f", &rad);
    area = 3.14 * rad * rad;
    printf("Area of circle is %f", area);
    return 0;
}