#include <stdio.h>
int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("s1.txt","a");
    f2=fopen("s2.txt","r");
    while((ch=fgetc(f2))!=EOF)
    {
        fputc(ch,f1);
    }
    fclose(f1);
    fclose(f2);
    return 0;
   
}