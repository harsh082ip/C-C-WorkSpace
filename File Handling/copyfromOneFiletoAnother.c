#include <stdio.h>
int main()
{
    FILE *fp;
    FILE *fl;
    char ch;
    fp = fopen("file1.txt", "r");
    if(fp==NULL)
    {
        printf("File dosen't exist");
    }
    else{
        ch = fgetc(fp);
        fl = fopen("file2.txt", "a");
        while(ch!=EOF)
        {
            fputc(ch, fl);
            ch = fgetc(fp);
        }
    }
    fclose(fp);
    fclose(fl);
}