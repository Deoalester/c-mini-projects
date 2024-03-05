#include <stdio.h>

void main()
{
    int i,j,n=4;
    char s1;
    for(i=1,s1='A';i<=n;i++,s1++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",s1);
        }
    printf("\n");
    }
}