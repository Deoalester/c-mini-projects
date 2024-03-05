#include <stdio.h>

int main()
{
    char x[100];
    int i,f=1;
    scanf("%[^\n]",x);
    for(i=0;x[i];i++)
    {
        if(x[i]==','&&x[i-1]!=x[i+1])
        {
            f=0;
            break;
        }
    }
    if(x[i-1]!=x[0])
    f=0;
    printf("%d",f);
}

