#include <stdio.h>

int main(void)
{
  int n = 0, t = 0;
  do
  {
    t += n;
    printf("%d, %d\n", n++, t);
  } while (n < 10);
}