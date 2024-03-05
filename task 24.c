#include <stdio.h>

int main()
{
    char a[100];
    int i,j;
    scanf("%[^\n]",a);
    for(i=0;a[i];i++)
    {
        for(j=i+1;a[i];j++)
        {
            if(a[i]==a[i]||a[i]==a[j]+32||a[i]==a[j]-32)
            a[j]=' ';
        }
        if(a[i]!=' '&&a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
        {
            printf("%c",a[i]);
        }
    }
}

