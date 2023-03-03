// A 
// A B
// A B C
// A B C D
// A B C D E
#include<stdio.h>
int main()
{
    for(char i='A'; i<='E'; i++)
    {
        for(char a='A'; a<=i; a++)
        {
            printf("%c ", a);
        }
        printf("\n");
    }
    return 0;
}