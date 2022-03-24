#include <stdio.h>

int main(void)
{
  int a, hap = 0;

  for (a = 0; a < 10; ++a, hap += a)
    ;

  // 0 => 1
  // 1 => 2
  // ...
  // 9 => 10
  // 1 ~ 10 = 55

  printf("%d, %d\n", a, hap);
}