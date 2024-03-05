#include <stdio.h>

int
main ()
{
  int n, temp, sum = 0;
  scanf ("%d", &n);
  temp = n;
  while (n)
    {
      sum += (n % 10);
      n /= 10;
    }
  printf (temp % sum == 0 ? "harshad number:%d" : "not harshad number:%d",
	  temp);
}

