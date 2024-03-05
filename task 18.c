#include <stdio.h>
int main()
{
     int n,a[100],i,b,j,t;
     scanf("%d %d",&n,&a[1]);
     b=a[1];
     for(i=2;i<=n;i++)
     {
          scanf("%d",&a[i]);
          if(b<a[i])
          b=a[i];
     }
     b++;
     for(i=1;i<=n;i++)
     {
          for(j=i+1;j<=n;j++)
          {
               if(a[i]==a[j])
               {
                    a[j]=b;
               }
          }
          if(a[i]!=b)
          printf("%d ",a[i]);
     }
}
     
