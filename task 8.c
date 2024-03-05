#include <stdio.h>

int main()
{
   int n;
   float s,t=0;
   scanf("%d",&n);
   s=n/2;
   while(s!=t)
   {
       t=s;
       s=(n/t+t)/2;
   }
   if(s==(int)s)
   printf("%d",(int)s);
   else
   printf("%.3f",s);
}