#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *t;
    t=(int*)malloc(3*4);
    scanf("%d%d%d",t,(t+1),(t+2));
    printf("%d",*t+*(t+1)+*(t+2));
}
