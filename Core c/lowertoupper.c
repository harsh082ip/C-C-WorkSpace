#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", ch);
    // int a = (int)ch;
    if(ch>=97 && ch<=122)
    {
        ch = ch-32;
        
        printf("%c in uppercase", ch);
    }
    return 0;
}