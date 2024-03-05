#include<stdio.h>
#include<string.h>
int main()
{
    FILE *p,*q;
    char x,b[100],s[10][10],f[100],y[100];
    int r=0,c=0;
    scanf("%s %s %s",b,f,y);
    p=fopen(b,"r+");
    do
    {
        x=getc(p);
        if(x==32 || x=='\n' || x==EOF)
        {
            s[r++][c]=0;
            c=0;
        }
        else
            s[r][c++]=x;
    }
    while(x!='\n'&&x!=EOF);
    fseek(p,0,SEEK_SET);
    for(c=0;c<r;c++)
    {
        fprintf(p,"%s ",strcmp(s[c],f)?s[c]:y);
    }
    fclose(p);
    return 0;
}
