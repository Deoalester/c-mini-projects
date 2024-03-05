#include <stdio.h>

int main()
{
   int r=0,f=1,n,i;
   scanf("%d",&n);
   for(i=1;i<=n;r+=(f*=i)/i,i++);
   printf("%d",r);
}
