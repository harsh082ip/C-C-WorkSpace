#include<stdio.h>
void display();
int main()
{
    display();
    display();
    display();
}
void display()
{
    static int a = 3;
    a++;
    printf("%d", a);
}
// Scope ----> Within the block
// Lifetime -----> Throughout the Code