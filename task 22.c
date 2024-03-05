#include <stdio.h>
#include <string.h>

int main()
{
   char a[100],b[50][50],f[50],r[50];
   int i,j=0,c=0;
   scanf("%[^\n]\n%s%s",a,f,r);
   for(i=0;a[i];i++)
   {
       if(a[i]!=' ')
       b[j][c++]=a[i];
       else
       {
           b[j][c]='\0';
           j++;
           c=0;
       }
   }
   b[j][c]=0;
   for(i=0;i<=j;i++)
   {
       if(strcmp(b[i],f)==0)
       strcpy(b[i],r);
       printf("%s ",b[i]);
   }
}
