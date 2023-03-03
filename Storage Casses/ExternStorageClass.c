#include<stdio.h>
int x = 5; // either extern int x = 5;
void display();
int main()
{
    display();
    printf("\n%d", x);
}
void display()
{
    printf("\n%d", x);
}
// Scope ----> Global
// As long as the code Executes